#include <dirent.h>
#include <unistd.h>
#include "__dirent.h"
#include "libc.h"

#ifndef __MICROCOSM__
int closedir(DIR *dir)
{
	int ret = close(dir->fd);
	free(dir);
	return ret;
}
#endif
