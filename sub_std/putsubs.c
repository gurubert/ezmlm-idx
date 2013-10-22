/*$Id: putsubs.c 380 2005-07-12 22:33:57Z bruce $*/

#include "subscribe.h"

unsigned long putsubs(const char *dir,		/* database base dir */
		      const char *subdir,
		      unsigned long hash_lo,
		      unsigned long hash_hi,
		      int subwrite(),		/* write function. */
		      int flagsql)
{
  return std_putsubs(dir,subdir,hash_lo,hash_hi,subwrite);
  (void)flagsql;
}
