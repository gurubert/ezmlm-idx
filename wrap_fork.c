/*$Id: wrap_fork.c 304 2005-04-28 23:53:52Z bruce $*/

#include "fork.h"
#include "errtxt.h"
#include "strerr.h"
#include "wrap.h"
#include "die.h"
#include "idx.h"

int wrap_fork(void)
{
  int child;
  if ((child = fork()) == -1)
    strerr_die2sys(111, FATAL, ERR_FORK);
  return child;
}
