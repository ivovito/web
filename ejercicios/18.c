#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int horas_trabajadas = atoi(argv[1]);
  int salario_horas = atoi(argv[2]);
  printf("%d\n", horas_trabajadas*salario_horas );
  return 0;
}
