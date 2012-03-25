#include "syscall.h"
#include "libc.h"

/* FIXME: all wrong */
long __unmapself()
{
	return syscall(SYS_exit);
}
