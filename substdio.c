/*$Id: substdio.c 165 2005-01-04 05:06:33Z bruce $*/

#include "substdio.h"

void substdio_fdbuf(substdio *s,int (*op)(),int fd,char *buf,int len)
{
  s->x = buf;
  s->fd = fd;
  s->op = op;
  s->p = 0;
  s->n = len;
}
