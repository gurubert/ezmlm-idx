/*$Id: checktag.c 369 2005-07-12 02:10:39Z bruce $*/

#include "subscribe.h"

const char *checktag(const char *dir,		/* the db base dir */
		     unsigned long num,		/* message number */
		     unsigned long listno,	/* bottom of range => slave */
		     const char *action,
		     const char *seed,		/* cookie base */
		     const char *hash)		/* cookie */
{
  return std_checktag(num,action,seed,hash);
  (void)dir;
  (void)listno;
}
