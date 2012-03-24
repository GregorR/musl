#include "pthread_impl.h"

#ifndef __MICROCOSM__
static long sccp(long nr, long u, long v, long w, long x, long y, long z)
{
	return (__syscall)(nr, u, v, w, x, y, z);
}

weak_alias(sccp, __syscall_cp);
#endif

static void dummy()
{
}

weak_alias(dummy, __testcancel);
