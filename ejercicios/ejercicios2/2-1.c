#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);

  if (x == z && z == y) {
    printf("iguales\n");
  } else {
    printf("no iguales\n");
  }
  return 0;
}
