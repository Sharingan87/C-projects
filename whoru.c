#include <stdio.h>

int main(int argc, char const *argv[]) {
  char me[100];
  printf("Well, what's your name?\n");
  scanf("%s\n", &me);
  printf("Hello %s \n", me);
  return 0;
}
