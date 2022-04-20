#include <stdio.h>
##include <stdlib.h>

int main(int argc, char const *argv[]) {
  double a = atoi(argv[1]);
  double b = atoi(argv[2]);
  double c = atoi(argv[3]);
  char disc = b*b - 4*a*c;
  if (a == 0) {
    printf("error\n");
  }else if (disc < 0) {
     printf("no hay solucion en numeros R\n");
  }else if (disc == 0) {
    printf("%d\n", "-b/2*a");
  } /*
  else {
printf("%s\n", );
}*/

  return 0;
}
