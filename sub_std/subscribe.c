/*$Id: subscribe.c 380 2005-07-12 22:33:57Z bruce $*/

#include "subscribe.h"

int subscribe(const char *dir,
	      const char *subdir,
	      const char *userhost,
	      int flagadd,
	      const char *comment,
	      const char *event,
	      int flagmysql,
	      int forcehash)
{
  return std_subscribe(dir,subdir,userhost,flagadd,comment,event,forcehash);
  (void)flagmysql;
}
