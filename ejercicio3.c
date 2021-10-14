#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
   srand(time(NULL));
  int numeros[n];
  for (int i = 0; i < n; i++){
    numeros[i]= rand() % (m + 1);
    printf("%d\n", numeros[i]);
   }
  return 0;
}
