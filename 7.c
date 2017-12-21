#include <stdio.h>

int main(int argc, char const *argv[]) {
  int number[4] = {0};
  char name[4] = {'a'};

  //first, print them out raw
  printf("numbers: %d %d %d %d\n", number[0], number[1], number[2], number[3]);
  printf("characters: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  printf("name: %s\n", name);
  printf("We printed these out raw.\n");
  number[0] = 1;
  number[1] = 2;
  number[2] = 3;
  number[3] = 4;

  name[0] = 'B';
  name[1] = 'o';
  name[2] = 'b';
  name[3] = '\0';
  printf("Now, we print them out with the integers and characters set up.\n");
  printf("numbers: %d %d %d %d\n", number[0], number[1], number[2], number[3]);
  printf("characters: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  printf("name: %s\n", name);

  char *another = "Bob";
  printf("Another name: %s\n", another);
  printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
  return 0;
}
