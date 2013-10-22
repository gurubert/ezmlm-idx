/*$Id: ezmlm-unsub.c 304 2005-04-28 23:53:52Z bruce $*/

const char FATAL[] = "ezmlm-unsub: fatal: ";
const char USAGE[] =
"ezmlm-unsub: usage: ezmlm-unsub [-h hash] [-HmMnNvV] dir [box@domain ...]";

extern void subunsub_main(int submode,
			  const char *version,
			  int argc,char **argv);

void main(int argc,char **argv)
{
  subunsub_main(0,"ezmlm-unsub version: ",argc,argv);
}
