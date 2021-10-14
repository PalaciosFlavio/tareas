#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100
#define M 100

int main(void) {
  srand(time(NULL));
  int numeros[N];
  double suma = 0.0;
  int max = -9999999;
  int min = 9999999;
  for (int i = 0; i < N; i++){
    numeros[i] = rand() % (M + 1);
     suma += numeros[i];
     if (numeros[i] > max) max = numeros[i];
     if (numeros[i] < min) min = numeros[i];
     //suma = suma + numeros[i];
  }
  double promedio = suma / N;
  printf("Promedio: %.2f/n", promedio);
  printf("Max: %d, Min: %d\n", max,min);
  return 0;
}
