#include <stdlib.h>
#include <stdio.h>
#include "config.h"
#include "munge.h"

int main(int argc, char *argv[]) {
  int i;
  printf("Starting ...");
  for (i=1; i<argc; ++i) {
    printf("\"%s\" => ", argv[i]);
    printf("\"%s\"\n", munge(argv[i]));
  }
}
