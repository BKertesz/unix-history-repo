/*
 * Copyright (c) 1988 University of Utah.
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * the Systems Programming Group of the University of Utah Computer
 * Science Department.
 *
 * %sccs.include.redist.c%
 *
 * from: Utah $Hdr: ite_rb.c 1.18 92/12/20$
 *
 *	@(#)ite_rb.c	7.8 (Berkeley) %G%
 */

#include "ite.h"
#if NITE > 0

#include <sys/param.h>
#include <sys/conf.h>
#include <sys/proc.h>
#include <sys/ioctl.h>
#include <sys/tty.h>
#include <sys/systm.h>

#include <hp/dev/itevar.h>
#include <hp/dev/itereg.h>
#include <hp300/dev/grf_rbreg.h>

#include <machine/cpu.h>

/* XXX */
#include <hp/dev/grfioctl.h>
#include <hp/dev/grfvar.h>

#define REGBASE		((struct rboxfb *)(ip->regbase))
#define WINDOWMOVER	rbox_windowmove

rbox_init(ip)
	struct ite_softc *ip;
{
	register int i;

	/* XXX */
	if (ip->regbase == 0) {
		struct grf_softc *gp = ip->grf;

		ip->regbase = gp->g_regkva;
		ip->fbbase = gp->g_fbkva;
		ip->fbwidth = gp->g_display.gd_fbwidth;
		ip->fbheight = gp->g_display.gd_fbheight;
		ip->dwidth = gp->g_display.gd_dwidth;
		ip->dheight = gp->g_display.gd_dheight;
	}

	rb_waitbusy(ip->regbase);

	REGBASE->reset = 0x39;
	DELAY(1000);

	REGBASE->interrupt = 0x04;
	REGBASE->display_enable = 0x01;
	REGBASE->video_enable = 0x01;
	REGBASE->drive = 0x01;
	REGBASE->vdrive = 0x0;

	ite_fontinfo(ip);
	
	REGBASE->opwen = 0xFF;

	/*
	 * Clear the framebuffer.
	 */
	rbox_windowmove(ip, 0, 0, 0, 0, ip->fbheight, ip->fbwidth, RR_CLEAR);
	rb_waitbusy(ip->regbase);

	for(i = 0; i < 16; i++) {
		*(ip->regbase + 0x63c3 + i*4) = 0x0;
		*(ip->regbase + 0x6403 + i*4) = 0x0;
		*(ip->regbase + 0x6803 + i*4) = 0x0;
		*(ip->regbase + 0x6c03 + i*4) = 0x0;
		*(ip->regbase + 0x73c3 + i*4) = 0x0;
		*(ip->regbase + 0x7403 + i*4) = 0x0;
		*(ip->regbase + 0x7803 + i*4) = 0x0;
		*(ip->regbase + 0x7c03 + i*4) = 0x0;
	}

	REGBASE->rep_rule = 0x33;
	
	/*
	 * I cannot figure out how to make the blink planes stop. So, we
	 * must set both colormaps so that when the planes blink, and
	 * the secondary colormap is active, we still get text.
	 */
	CM1RED[0x00].value = 0x00;
	CM1GRN[0x00].value = 0x00;
	CM1BLU[0x00].value = 0x00;
	CM1RED[0x01].value = 0xFF;
	CM1GRN[0x01].value = 0xFF;
	CM1BLU[0x01].value = 0xFF;

	CM2RED[0x00].value = 0x00;
	CM2GRN[0x00].value = 0x00;
	CM2BLU[0x00].value = 0x00;
	CM2RED[0x01].value = 0xFF;
	CM2GRN[0x01].value = 0xFF;
	CM2BLU[0x01].value = 0xFF;

 	REGBASE->blink = 0x00;
	REGBASE->write_enable = 0x01;
	REGBASE->opwen = 0x00;
	
	ite_fontinit(ip);
	
	/*
	 * Stash the inverted cursor.
	 */
	rbox_windowmove(ip, charY(ip, ' '), charX(ip, ' '),
			    ip->cblanky, ip->cblankx, ip->ftheight,
			    ip->ftwidth, RR_COPYINVERTED);
}

rbox_deinit(ip)
	struct ite_softc *ip;
{
	rbox_windowmove(ip, 0, 0, 0, 0, ip->fbheight, ip->fbwidth, RR_CLEAR);
	rb_waitbusy(ip->regbase);

   	ip->flags &= ~ITE_INITED;
}

rbox_putc(ip, c, dy, dx, mode)
	register struct ite_softc *ip;
        register int dy, dx;
	int c, mode;
{
        register int wrr = ((mode == ATTR_INV) ? RR_COPYINVERTED : RR_COPY);
	
	rbox_windowmove(ip, charY(ip, c), charX(ip, c),
			dy * ip->ftheight, dx * ip->ftwidth,
			ip->ftheight, ip->ftwidth, wrr);
}

rbox_cursor(ip, flag)
	register struct ite_softc *ip;
        register int flag;
{
	if (flag == DRAW_CURSOR)
		draw_cursor(ip)
	else if (flag == MOVE_CURSOR) {
		erase_cursor(ip)
		draw_cursor(ip)
	}
	else
		erase_cursor(ip)
}

rbox_clear(ip, sy, sx, h, w)
	struct ite_softc *ip;
	register int sy, sx, h, w;
{
	rbox_windowmove(ip, sy * ip->ftheight, sx * ip->ftwidth,
			sy * ip->ftheight, sx * ip->ftwidth, 
			h  * ip->ftheight, w  * ip->ftwidth,
			RR_CLEAR);
}

rbox_scroll(ip, sy, sx, count, dir)
        register struct ite_softc *ip;
        register int sy, count;
        int dir, sx;
{
	register int dy;
	register int dx = sx;
	register int height = 1;
	register int width = ip->cols;

	if (dir == SCROLL_UP) {
		dy = sy - count;
		height = ip->rows - sy;
	}
	else if (dir == SCROLL_DOWN) {
		dy = sy + count;
		height = ip->rows - dy - 1;
	}
	else if (dir == SCROLL_RIGHT) {
		dy = sy;
		dx = sx + count;
		width = ip->cols - dx;
	}
	else {
		dy = sy;
		dx = sx - count;
		width = ip->cols - sx;
	}		

	rbox_windowmove(ip, sy * ip->ftheight, sx * ip->ftwidth,
			dy * ip->ftheight, dx * ip->ftwidth,
			height * ip->ftheight,
			width  * ip->ftwidth, RR_COPY);
}

rbox_windowmove(ip, sy, sx, dy, dx, h, w, func)
	struct ite_softc *ip;
	int sy, sx, dy, dx, h, w, func;
{
	register struct rboxfb *rp = REGBASE;
	if (h == 0 || w == 0)
		return;
	
	rb_waitbusy(ip->regbase);
	rp->rep_rule = func << 4 | func;
	rp->source_y = sy;
	rp->source_x = sx;
	rp->dest_y = dy;
	rp->dest_x = dx;
	rp->wheight = h;
	rp->wwidth  = w;
	rp->wmove = 1;
}
#endif
