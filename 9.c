#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 0;
  for (i = 1; i < argc;  i++) {
    printf("arg %d: %s\n",i,argv[i]);
  }
  char *states[] = {
  "Texas", "Washington", "Oregon", "California"};
  return 0;
}
