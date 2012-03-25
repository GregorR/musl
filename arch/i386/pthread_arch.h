static inline struct pthread *__pthread_self()
{
#ifndef __MICROCOSM__
	struct pthread *self;
	__asm__ __volatile__ ("movl %%gs:0,%0" : "=r" (self) );
	return self;
#else
        /* FIXME: threads */
        static struct pthread self;
        return &self;
#endif
}

#define CANCEL_REG_SP 7
#define CANCEL_REG_IP 14
