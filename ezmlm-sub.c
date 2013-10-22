/*$Id: ezmlm-sub.c 304 2005-04-28 23:53:52Z bruce $*/

const char FATAL[] = "ezmlm-sub: fatal: ";
const char USAGE[] =
"ezmlm-sub: usage: ezmlm-sub [-mMvV] [-h hash] [-n] dir [box@domain [name]] ...";

extern void subunsub_main(int submode,
			  const char *version,
			  int argc,char **argv);

void main(int argc,char **argv)
{
  subunsub_main(1,"ezmlm-sub version: ",argc,argv);
}
