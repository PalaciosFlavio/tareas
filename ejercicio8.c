#include <stdio.h>

int main(void) {
  int lista[]= {1, 2, 3, 4, 5, 6,};

  int temp = lista[5];
  lista[5] = lista[0];
  lista[0]= temp;

  temp = lista[4];
  lista[4] = lista[1];
  lista[1]= temp;

  temp = lista[3];
  lista[3] = lista[2];
  lista[2]= temp;

  for (int i = 0 ; i < 6; i++){
    printf("%d\n", lista[i]);
  }
}
