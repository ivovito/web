#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int random = (rand() %(a-b + 1) + a);
  printf("%d\n", random);
  return 0;
}
