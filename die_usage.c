/*$Id: die_usage.c 304 2005-04-28 23:53:52Z bruce $*/

#include "strerr.h"
#include "errtxt.h"
#include "die.h"

void die_usage(void)
{
  strerr_die1x(100,USAGE);
}
