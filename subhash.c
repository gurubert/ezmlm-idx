/*$Id: subhash.c 360 2005-07-07 23:38:54Z bruce $*/

#include "subhash.h"
#include "str.h"

unsigned int subhashb(const unsigned char *s,long len)
{
  unsigned long h;
  h = 5381;
  while (len-- > 0)
    h = (h + (h << 5)) ^ (unsigned int)*s++;
  return h % 53;
}

unsigned int subhashs(const unsigned char *s)
{
  return subhashb(s,str_len(s));
}
