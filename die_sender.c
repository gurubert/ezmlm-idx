/*$Id: die_sender.c 304 2005-04-28 23:53:52Z bruce $*/

#include "strerr.h"
#include "errtxt.h"
#include "die.h"

void die_sender(void)
{
  strerr_die2x(100,FATAL,ERR_NOSENDER);
}
