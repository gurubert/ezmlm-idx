/*$Id: wrap_exitcode.c 304 2005-04-28 23:53:52Z bruce $*/

#include "errtxt.h"
#include "strerr.h"
#include "wrap.h"
#include "die.h"
#include "idx.h"

void wrap_exitcode(int pid)
{
  switch (wrap_waitpid(pid)) {
    case 100:
      strerr_die2x(100,FATAL,ERR_CHILD_FATAL);
    case 111:
      strerr_die2x(111,FATAL,ERR_CHILD_TEMP);
    case 0:
      break;
    default:
      strerr_die2x(111,FATAL,ERR_CHILD_UNKNOWN);
  }
}
