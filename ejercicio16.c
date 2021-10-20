#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  char *palabras[] = { "hola", "asd", "perro", "gato"};
  for (int i = 0; i < 4; i++) {
  int j = 0;
  bool iguales = true;
  while (palabras[i][j] != 0) {
    if (!(palabras[i][j] == argv[1][j]))
    iguales = false;
    j++;
  }
if (iguales){
  printf("%d\n", i);
  return 0;
}
}
  printf("-1\n");
  return 0;
}
