#ifndef __MICROCOSM__
#include "syscall.h"

int brk(void *end)
{
	return -(syscall(SYS_brk, end) != (unsigned long)end);
}
#endif
