#include <stdio.h>
int main(int argc, char const *argv[]) {
  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at a rate of %f.\n", bugs, bug_rate);

  long universe_of_defects = 1L * 1204L * 1204L * 1204L;
  printf("The entire universe has %ld bugs\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs\n", expected_bugs);

  return 0;
}
