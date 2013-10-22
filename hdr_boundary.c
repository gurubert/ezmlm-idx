/*$Id: hdr_boundary.c 126 2004-12-23 23:39:01Z bruce $*/

#include "hdr.h"
#include "qmail.h"
#include "makehash.h"

extern struct qmail qq;
extern char boundary[HASHLEN];

void hdr_boundary(int last)
{
  qmail_puts(&qq,"\n\n--");
  qmail_put(&qq,boundary,HASHLEN);
  qmail_puts(&qq,last ? "--\n" : "\n");
}
