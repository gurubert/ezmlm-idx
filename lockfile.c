/*$Id: lockfile.c 304 2005-04-28 23:53:52Z bruce $*/
#include "lock.h"
#include "errtxt.h"
#include "strerr.h"
#include "die.h"
#include "idx.h"
#include "open.h"

int lockfile(const char *path)
{
  int fd;
  fd = open_append(path);
  if (fd == -1)
    strerr_die4sys(111,FATAL,ERR_OPEN,path,": ");
  if (lock_ex(fd) == -1)
    strerr_die4sys(111,FATAL,ERR_OBTAIN,path,": ");
  return fd;
}
