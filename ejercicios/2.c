#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  bool f = false;
  f = a%b == 0;
  printf("%s\n", f? "verdadero" : "falso");
  return 0;
}
