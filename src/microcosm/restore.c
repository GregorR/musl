#include "syscall.h"
#include "libc.h"

long __restore()
{
	return syscall_cp(SYS_rt_sigreturn);
}

long __restore_rt()
{
	return syscall_cp(SYS_rt_sigreturn);
}
