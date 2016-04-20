#ifndef MUNGE_H
#define MUNGE_H
#include <ctype.h>

#define MUNGE(x) ( *x = toupper(*x), x )

char *munge(char* plain);

#endif
