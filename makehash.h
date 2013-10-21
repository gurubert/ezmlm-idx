#ifndef MAKEHASH_H
#define MAKEHASH_H

/* Must be equal to COOKIE length from cookie.h */
#define HASHLEN 20

extern void makehash(const char *indata,unsigned int inlen,char *hash);
extern void mkauthhash(const char *s,unsigned int len,char *h);

#endif

