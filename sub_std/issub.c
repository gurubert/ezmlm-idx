/*$Id: issub.c 380 2005-07-12 22:33:57Z bruce $*/

#include "subscribe.h"

const char *issub(const char *dir,		/* directory to basedir */
		  const char *subdir,
		  const char *userhost)
{
  return std_issub(dir,subdir,userhost);
}
