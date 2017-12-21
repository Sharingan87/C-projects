#include <stdio.h>

int main(int argc, char const *argv[]) {
  int areas[] = {10, 12, 13, 14, 20, 212};
  char name[] = "Joshua";
  char full_name[] = {
    'J', 'o', 's', 'h', 'u', 'a', ' ', 'L', 'u', '\0'
  };

  printf("The size of an int: %ld\n", sizeof(int));//sizeof shows the size of the bytes
  printf("The size of areas (int[]): %ld\n", sizeof(areas));//shows the size of the variable areas
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, and the second area is %d\n", areas[0], areas[1]);
  printf("My full name is: \"%s\"\n", full_name);
  printf("My first name is: \"%s\"\n", name);
  return 0;
}
