#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);
int suma = 0;
suma += suma + a%2 ==0 ? 0 : a;
suma += b%2 ==0 ? 0 : b;
suma += c%2 ==0 ? 0 : c;
suma += d%2 ==0 ? 0 : d;
suma += e%2 ==0 ? 0 : e;
printf("%d\n", suma );
  return 0;
}
