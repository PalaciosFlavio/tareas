#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main() {
  int numeros[] = {1,2,3,4,5,6,7,8};
  int lista[] = {1,112,2323,233,4,235,56,79,8};
  print_array(lista, 9);
  print_array(numeros, 8);
  print_array(lista, 9);
  print_array(lista, 9);
  print_array(lista, 9);
  return 0;
}
