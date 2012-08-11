struct __DIR_s
{
/* on Microcosm we use the host, so prevent this from working */
#ifndef __MICROCOSM__
	int fd;
	off_t tell;
	int buf_pos;
	int buf_end;
	int lock[2];
	char buf[2048];
#endif
};
