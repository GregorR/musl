#include <sched.h>
#include "syscall.h"
#include "libc.h"

int __clone(int (*fn)(void *), void *child_stack,
            int flags, void *arg, pid_t *ptid, pid_t *ctid)
{
	/* obviously wrong for Linux, but doesn't need to be right */
	return syscall_cp(SYS_clone, fn, child_stack, flags, arg, ptid, ctid);
}
