#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  char *meses[] = {
    "Enero", "Febrero", "Marzo",
    "Abril", "Mayo", "Junio",
    "Julio", "Agosto", "Septiembre",
    "Octubre", "Noviembre", "Diciembre"
  };
  printf("%s\n", meses[n - 1]);
  return 0;
}
