#include <stdio.h>

int main(int argc, char const *argv[]) {
  int apples = 10;
  int oranges = 16;
  int fruit(void);

  fruit = apples + oranges;
  printf("The sum of %d apples, and %d oranges is %d.\n", apples, oranges, fruit);
  return 0;
}
