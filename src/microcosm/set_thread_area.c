#include "syscall.h"
#include "libc.h"

long __set_thread_area(unsigned long arg)
{
	return syscall_cp(SYS_set_thread_area, arg);
}
