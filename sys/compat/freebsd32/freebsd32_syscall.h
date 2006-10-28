/*
 * System call numbers.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 * created from FreeBSD: src/sys/compat/freebsd32/syscalls.master,v 1.50.2.9 2006/10/28 17:38:54 rwatson Exp 
 */

#define	FREEBSD32_SYS_syscall	0
#define	FREEBSD32_SYS_exit	1
#define	FREEBSD32_SYS_fork	2
#define	FREEBSD32_SYS_read	3
#define	FREEBSD32_SYS_write	4
#define	FREEBSD32_SYS_open	5
#define	FREEBSD32_SYS_close	6
#define	FREEBSD32_SYS_freebsd32_wait4	7
				/* 8 is obsolete old creat */
#define	FREEBSD32_SYS_link	9
#define	FREEBSD32_SYS_unlink	10
				/* 11 is obsolete execv */
#define	FREEBSD32_SYS_chdir	12
#define	FREEBSD32_SYS_fchdir	13
#define	FREEBSD32_SYS_mknod	14
#define	FREEBSD32_SYS_chmod	15
#define	FREEBSD32_SYS_chown	16
#define	FREEBSD32_SYS_break	17
				/* 18 is old freebsd32_getfsstat */
				/* 19 is obsolete olseek */
#define	FREEBSD32_SYS_getpid	20
#define	FREEBSD32_SYS_mount	21
#define	FREEBSD32_SYS_unmount	22
#define	FREEBSD32_SYS_setuid	23
#define	FREEBSD32_SYS_getuid	24
#define	FREEBSD32_SYS_geteuid	25
#define	FREEBSD32_SYS_ptrace	26
#define	FREEBSD32_SYS_freebsd32_recvmsg	27
#define	FREEBSD32_SYS_freebsd32_sendmsg	28
#define	FREEBSD32_SYS_freebsd32_recvfrom	29
#define	FREEBSD32_SYS_accept	30
#define	FREEBSD32_SYS_getpeername	31
#define	FREEBSD32_SYS_getsockname	32
#define	FREEBSD32_SYS_access	33
#define	FREEBSD32_SYS_chflags	34
#define	FREEBSD32_SYS_fchflags	35
#define	FREEBSD32_SYS_sync	36
#define	FREEBSD32_SYS_kill	37
#define	FREEBSD32_SYS_getppid	39
#define	FREEBSD32_SYS_dup	41
#define	FREEBSD32_SYS_pipe	42
#define	FREEBSD32_SYS_getegid	43
#define	FREEBSD32_SYS_profil	44
#define	FREEBSD32_SYS_ktrace	45
				/* 46 is old freebsd32_sigaction */
#define	FREEBSD32_SYS_getgid	47
				/* 48 is old freebsd32_sigprocmask */
#define	FREEBSD32_SYS_getlogin	49
#define	FREEBSD32_SYS_setlogin	50
#define	FREEBSD32_SYS_acct	51
				/* 52 is old freebsd32_sigpending */
#define	FREEBSD32_SYS_freebsd32_sigaltstack	53
#define	FREEBSD32_SYS_ioctl	54
#define	FREEBSD32_SYS_reboot	55
#define	FREEBSD32_SYS_revoke	56
#define	FREEBSD32_SYS_symlink	57
#define	FREEBSD32_SYS_readlink	58
#define	FREEBSD32_SYS_freebsd32_execve	59
#define	FREEBSD32_SYS_umask	60
#define	FREEBSD32_SYS_chroot	61
				/* 62 is obsolete ofstat */
				/* 63 is obsolete ogetkerninfo */
				/* 64 is obsolete ogetpagesize */
#define	FREEBSD32_SYS_msync	65
#define	FREEBSD32_SYS_vfork	66
				/* 67 is obsolete vread */
				/* 68 is obsolete vwrite */
#define	FREEBSD32_SYS_sbrk	69
#define	FREEBSD32_SYS_sstk	70
				/* 71 is obsolete ommap */
#define	FREEBSD32_SYS_vadvise	72
#define	FREEBSD32_SYS_munmap	73
#define	FREEBSD32_SYS_mprotect	74
#define	FREEBSD32_SYS_madvise	75
				/* 76 is obsolete vhangup */
				/* 77 is obsolete vlimit */
#define	FREEBSD32_SYS_mincore	78
#define	FREEBSD32_SYS_getgroups	79
#define	FREEBSD32_SYS_setgroups	80
#define	FREEBSD32_SYS_getpgrp	81
#define	FREEBSD32_SYS_setpgid	82
#define	FREEBSD32_SYS_freebsd32_setitimer	83
				/* 84 is obsolete owait */
				/* 85 is obsolete oswapon */
#define	FREEBSD32_SYS_freebsd32_getitimer	86
				/* 87 is obsolete ogethostname */
				/* 88 is obsolete osethostname */
#define	FREEBSD32_SYS_getdtablesize	89
#define	FREEBSD32_SYS_dup2	90
#define	FREEBSD32_SYS_fcntl	92
#define	FREEBSD32_SYS_freebsd32_select	93
#define	FREEBSD32_SYS_fsync	95
#define	FREEBSD32_SYS_setpriority	96
#define	FREEBSD32_SYS_socket	97
#define	FREEBSD32_SYS_connect	98
				/* 99 is obsolete oaccept */
#define	FREEBSD32_SYS_getpriority	100
				/* 101 is obsolete osend */
				/* 102 is obsolete orecv */
				/* 103 is obsolete osigreturn */
#define	FREEBSD32_SYS_bind	104
#define	FREEBSD32_SYS_setsockopt	105
#define	FREEBSD32_SYS_listen	106
				/* 107 is obsolete vtimes */
				/* 108 is old freebsd32_sigvec */
				/* 109 is old freebsd32_sigblock */
				/* 110 is old freebsd32_sigsetmask */
				/* 111 is old freebsd32_sigsuspend */
				/* 112 is old freebsd32_sigstack */
				/* 113 is obsolete orecvmsg */
				/* 114 is obsolete osendmsg */
				/* 115 is obsolete vtrace */
#define	FREEBSD32_SYS_freebsd32_gettimeofday	116
#define	FREEBSD32_SYS_freebsd32_getrusage	117
#define	FREEBSD32_SYS_getsockopt	118
#define	FREEBSD32_SYS_freebsd32_readv	120
#define	FREEBSD32_SYS_freebsd32_writev	121
#define	FREEBSD32_SYS_freebsd32_settimeofday	122
#define	FREEBSD32_SYS_fchown	123
#define	FREEBSD32_SYS_fchmod	124
				/* 125 is obsolete orecvfrom */
#define	FREEBSD32_SYS_setreuid	126
#define	FREEBSD32_SYS_setregid	127
#define	FREEBSD32_SYS_rename	128
				/* 129 is obsolete otruncate */
				/* 130 is obsolete ftruncate */
#define	FREEBSD32_SYS_flock	131
#define	FREEBSD32_SYS_mkfifo	132
#define	FREEBSD32_SYS_sendto	133
#define	FREEBSD32_SYS_shutdown	134
#define	FREEBSD32_SYS_socketpair	135
#define	FREEBSD32_SYS_mkdir	136
#define	FREEBSD32_SYS_rmdir	137
#define	FREEBSD32_SYS_freebsd32_utimes	138
				/* 139 is obsolete 4.2 sigreturn */
#define	FREEBSD32_SYS_freebsd32_adjtime	140
				/* 141 is obsolete ogetpeername */
				/* 142 is obsolete ogethostid */
				/* 143 is obsolete sethostid */
				/* 144 is obsolete getrlimit */
				/* 145 is obsolete setrlimit */
				/* 146 is obsolete killpg */
#define	FREEBSD32_SYS_setsid	147
#define	FREEBSD32_SYS_quotactl	148
				/* 149 is obsolete oquota */
				/* 150 is obsolete ogetsockname */
				/* 156 is obsolete ogetdirentries */
				/* 157 is old freebsd32_statfs */
				/* 158 is old freebsd32_fstatfs */
#define	FREEBSD32_SYS_getfh	161
#define	FREEBSD32_SYS_getdomainname	162
#define	FREEBSD32_SYS_setdomainname	163
#define	FREEBSD32_SYS_uname	164
#define	FREEBSD32_SYS_sysarch	165
#define	FREEBSD32_SYS_rtprio	166
#define	FREEBSD32_SYS_freebsd32_semsys	169
#define	FREEBSD32_SYS_freebsd32_msgsys	170
#define	FREEBSD32_SYS_freebsd32_shmsys	171
#define	FREEBSD32_SYS_freebsd32_pread	173
#define	FREEBSD32_SYS_freebsd32_pwrite	174
#define	FREEBSD32_SYS_ntp_adjtime	176
#define	FREEBSD32_SYS_setgid	181
#define	FREEBSD32_SYS_setegid	182
#define	FREEBSD32_SYS_seteuid	183
#define	FREEBSD32_SYS_freebsd32_stat	188
#define	FREEBSD32_SYS_freebsd32_fstat	189
#define	FREEBSD32_SYS_freebsd32_lstat	190
#define	FREEBSD32_SYS_pathconf	191
#define	FREEBSD32_SYS_fpathconf	192
#define	FREEBSD32_SYS_getrlimit	194
#define	FREEBSD32_SYS_setrlimit	195
#define	FREEBSD32_SYS_getdirentries	196
#define	FREEBSD32_SYS_freebsd32_mmap	197
#define	FREEBSD32_SYS___syscall	198
#define	FREEBSD32_SYS_freebsd32_lseek	199
#define	FREEBSD32_SYS_freebsd32_truncate	200
#define	FREEBSD32_SYS_freebsd32_ftruncate	201
#define	FREEBSD32_SYS_freebsd32_sysctl	202
#define	FREEBSD32_SYS_mlock	203
#define	FREEBSD32_SYS_munlock	204
#define	FREEBSD32_SYS_undelete	205
#define	FREEBSD32_SYS_freebsd32_futimes	206
#define	FREEBSD32_SYS_getpgid	207
#define	FREEBSD32_SYS_poll	209
#define	FREEBSD32_SYS___semctl	220
#define	FREEBSD32_SYS_semget	221
#define	FREEBSD32_SYS_semop	222
#define	FREEBSD32_SYS_msgctl	224
#define	FREEBSD32_SYS_msgget	225
#define	FREEBSD32_SYS_msgsnd	226
#define	FREEBSD32_SYS_msgrcv	227
#define	FREEBSD32_SYS_shmat	228
#define	FREEBSD32_SYS_freebsd32_shmctl	229
#define	FREEBSD32_SYS_shmdt	230
#define	FREEBSD32_SYS_shmget	231
#define	FREEBSD32_SYS_freebsd32_clock_gettime	232
#define	FREEBSD32_SYS_freebsd32_clock_settime	233
#define	FREEBSD32_SYS_freebsd32_clock_getres	234
#define	FREEBSD32_SYS_freebsd32_nanosleep	240
#define	FREEBSD32_SYS_minherit	250
#define	FREEBSD32_SYS_rfork	251
#define	FREEBSD32_SYS_openbsd_poll	252
#define	FREEBSD32_SYS_issetugid	253
#define	FREEBSD32_SYS_lchown	254
#define	FREEBSD32_SYS_getdents	272
#define	FREEBSD32_SYS_lchmod	274
#define	FREEBSD32_SYS_netbsd_lchown	275
#define	FREEBSD32_SYS_freebsd32_lutimes	276
#define	FREEBSD32_SYS_netbsd_msync	277
#define	FREEBSD32_SYS_nstat	278
#define	FREEBSD32_SYS_nfstat	279
#define	FREEBSD32_SYS_nlstat	280
#define	FREEBSD32_SYS_freebsd32_preadv	289
#define	FREEBSD32_SYS_freebsd32_pwritev	290
				/* 297 is old freebsd32_fhstatfs */
#define	FREEBSD32_SYS_fhopen	298
#define	FREEBSD32_SYS_fhstat	299
#define	FREEBSD32_SYS_modnext	300
#define	FREEBSD32_SYS_freebsd32_modstat	301
#define	FREEBSD32_SYS_modfnext	302
#define	FREEBSD32_SYS_modfind	303
#define	FREEBSD32_SYS_kldload	304
#define	FREEBSD32_SYS_kldunload	305
#define	FREEBSD32_SYS_kldfind	306
#define	FREEBSD32_SYS_kldnext	307
#define	FREEBSD32_SYS_kldstat	308
#define	FREEBSD32_SYS_kldfirstmod	309
#define	FREEBSD32_SYS_getsid	310
#define	FREEBSD32_SYS_setresuid	311
#define	FREEBSD32_SYS_setresgid	312
				/* 313 is obsolete signanosleep */
#define	FREEBSD32_SYS_yield	321
				/* 322 is obsolete thr_sleep */
				/* 323 is obsolete thr_wakeup */
#define	FREEBSD32_SYS_mlockall	324
#define	FREEBSD32_SYS_munlockall	325
#define	FREEBSD32_SYS___getcwd	326
#define	FREEBSD32_SYS_sched_setparam	327
#define	FREEBSD32_SYS_sched_getparam	328
#define	FREEBSD32_SYS_sched_setscheduler	329
#define	FREEBSD32_SYS_sched_getscheduler	330
#define	FREEBSD32_SYS_sched_yield	331
#define	FREEBSD32_SYS_sched_get_priority_max	332
#define	FREEBSD32_SYS_sched_get_priority_min	333
#define	FREEBSD32_SYS_sched_rr_get_interval	334
#define	FREEBSD32_SYS_utrace	335
				/* 336 is old freebsd32_sendfile */
#define	FREEBSD32_SYS_kldsym	337
#define	FREEBSD32_SYS_jail	338
#define	FREEBSD32_SYS_sigprocmask	340
#define	FREEBSD32_SYS_sigsuspend	341
				/* 342 is old freebsd32_sigaction */
#define	FREEBSD32_SYS_sigpending	343
				/* 344 is old freebsd32_sigreturn */
#define	FREEBSD32_SYS___acl_get_file	347
#define	FREEBSD32_SYS___acl_set_file	348
#define	FREEBSD32_SYS___acl_get_fd	349
#define	FREEBSD32_SYS___acl_set_fd	350
#define	FREEBSD32_SYS___acl_delete_file	351
#define	FREEBSD32_SYS___acl_delete_fd	352
#define	FREEBSD32_SYS___acl_aclcheck_file	353
#define	FREEBSD32_SYS___acl_aclcheck_fd	354
#define	FREEBSD32_SYS_extattrctl	355
#define	FREEBSD32_SYS_extattr_set_file	356
#define	FREEBSD32_SYS_extattr_get_file	357
#define	FREEBSD32_SYS_extattr_delete_file	358
#define	FREEBSD32_SYS_getresuid	360
#define	FREEBSD32_SYS_getresgid	361
#define	FREEBSD32_SYS_kqueue	362
#define	FREEBSD32_SYS_freebsd32_kevent	363
#define	FREEBSD32_SYS_extattr_set_fd	371
#define	FREEBSD32_SYS_extattr_get_fd	372
#define	FREEBSD32_SYS_extattr_delete_fd	373
#define	FREEBSD32_SYS___setugid	374
#define	FREEBSD32_SYS_eaccess	376
#define	FREEBSD32_SYS_nmount	378
#define	FREEBSD32_SYS_kse_exit	379
#define	FREEBSD32_SYS_kse_wakeup	380
#define	FREEBSD32_SYS_kse_create	381
#define	FREEBSD32_SYS_kse_thr_interrupt	382
#define	FREEBSD32_SYS_kse_release	383
#define	FREEBSD32_SYS_kenv	390
#define	FREEBSD32_SYS_lchflags	391
#define	FREEBSD32_SYS_uuidgen	392
#define	FREEBSD32_SYS_freebsd32_sendfile	393
#define	FREEBSD32_SYS_getfsstat	395
#define	FREEBSD32_SYS_statfs	396
#define	FREEBSD32_SYS_fstatfs	397
#define	FREEBSD32_SYS_fhstatfs	398
#define	FREEBSD32_SYS_freebsd32_sigaction	416
#define	FREEBSD32_SYS_freebsd32_sigreturn	417
#define	FREEBSD32_SYS_thr_create	430
#define	FREEBSD32_SYS_thr_exit	431
#define	FREEBSD32_SYS_thr_self	432
#define	FREEBSD32_SYS_thr_kill	433
#define	FREEBSD32_SYS__umtx_lock	434
#define	FREEBSD32_SYS__umtx_unlock	435
#define	FREEBSD32_SYS_jail_attach	436
#define	FREEBSD32_SYS_thr_suspend	442
#define	FREEBSD32_SYS_thr_wake	443
#define	FREEBSD32_SYS_kldunloadf	444
#define	FREEBSD32_SYS_audit	445
#define	FREEBSD32_SYS_auditon	446
#define	FREEBSD32_SYS_getauid	447
#define	FREEBSD32_SYS_setauid	448
#define	FREEBSD32_SYS_getaudit	449
#define	FREEBSD32_SYS_setaudit	450
#define	FREEBSD32_SYS_getaudit_addr	451
#define	FREEBSD32_SYS_setaudit_addr	452
#define	FREEBSD32_SYS_auditctl	453
#define	FREEBSD32_SYS_MAXSYSCALL	455
