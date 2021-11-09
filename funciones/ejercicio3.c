#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool iguales(int a, int b, int c){
  if (a == b && b == c) return true;
  else return false;
}

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%d\n", iguales(x, y, z));
  return 0;
}
