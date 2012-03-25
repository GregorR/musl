static inline struct pthread *__pthread_self()
{
#ifndef __MICROCOSM__
	struct pthread *self;
	__asm__ __volatile__ ("movq %%fs:0,%0" : "=r" (self) );
	return self;
#else
        /* FIXME: threads */
        static struct pthread self;
        return &self;
#endif
}

#define CANCEL_REG_SP 15
#define CANCEL_REG_IP 16
