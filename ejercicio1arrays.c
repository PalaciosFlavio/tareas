#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numeros[10];
  for (int i = 0; i < 10; i++) {
    numeros[i] = i + 1;
    printf("%d\n", numeros[i]);
  }
  return 0;
}
