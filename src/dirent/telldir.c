#include <dirent.h>
#include "__dirent.h"

#ifndef __MICROCOSM__
long telldir(DIR *dir)
{
	return dir->tell;
}
#endif
