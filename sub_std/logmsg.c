/*$Id: logmsg.c 372 2005-07-12 05:49:07Z bruce $*/
#include "stralloc.h"
#include "fmt.h"
#include "subscribe.h"
#include "errtxt.h"

const char *logmsg(const char *dir,
		   unsigned long num,
		   unsigned long listno,
		   unsigned long subs,
		   int done)
{
  return (char *) 0;	/* no SQL => success */
  (void)dir;
  (void)num;
  (void)listno;
  (void)subs;
  (void)done;
}
