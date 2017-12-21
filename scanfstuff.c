#include <stdio.h>

int main(int argc, char const *argv[]) {
  char name[100];
  char color[100];

  printf("What's your name?\n");
  scanf("%s", name);
  printf("What's your favorite color?\n");
  scanf("%s", color);
  printf("%s, your favorite color is %s\n", name, color);
  return 0;
}
