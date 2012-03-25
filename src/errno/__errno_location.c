#include "pthread_impl.h"

int *__errno_location(void)
{
	static int e;
#ifndef __MICROCOSM__ /* FIXME: threads :( */
	if (libc.main_thread) return __pthread_self()->errno_ptr;
#endif
	return &e;
}
