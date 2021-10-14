#include <stdio.h>

#define N 5

int main(void){
  double v[] = {2, 4, 6, 8, 10};
  double u[] = {1, 2, 3, 4, 5};
  double resultado = 0.0;
  for (int i = 0; i < N; i++){
    resultado += v[i] * u[i];
  }
  printf("%2.f\n", resultado);
}
