#include <stdio.h>

int main(int argc, char const *argv[]) {
  char adj[100];
  char name[100];
  char adj1[100];
  char color[100];
  char noun[100];
  char yesno[4];

  printf("Hey, wanna play Madlib?\n");
  printf("Type in an adj: ");
  scanf("%s", &adj);
  printf("Type in a name: ");
  scanf("%s", &name);
  printf("Type in another adj: ");
  scanf("%s", &adj1);
  printf("Type in a color: ");
  scanf("%s", &color);
  printf("Type in a noun: ");
  scanf("%s", &noun);
  printf("Ok. Once upon a time, a %s boy named %s decided to walk on the %s %s %s. The end!\n", adj, name, adj1, color, noun);
  return 0;
}
