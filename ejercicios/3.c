#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  bool f = false;
  f = a >= b+c;
  f = b >= a+c;
  f = c >= b+a;
  printf("%s\n", f? "verdadero":"falso");
  return 0;
}
