/*$Id: wrap_waitpid.c 304 2005-04-28 23:53:52Z bruce $*/

#include "wait.h"
#include "errtxt.h"
#include "strerr.h"
#include "wrap.h"
#include "die.h"
#include "idx.h"

int wrap_waitpid(int pid)
{
  int wstat;
  wait_pid(&wstat,pid);
  if (wait_crashed(wstat))
    strerr_die2x(111,FATAL,ERR_CHILD_CRASHED);
  return wait_exitcode(wstat);
}
