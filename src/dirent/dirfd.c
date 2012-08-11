#include <dirent.h>
#include "__dirent.h"

#ifndef __MICROCOSM__
int dirfd(DIR *d)
{
	return d->fd;
}
#endif
