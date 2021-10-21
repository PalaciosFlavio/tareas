#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc, char *argv[]){
int n=atoi(argv[1]);
srand(time(NULL));
  char *mazo[40];
  char *palo[4] = {"oro", "espada", "basto", "copa"};
  char *numeros[10] = {
    "uno", "dos", "tres",
    "cuatro", "cinco", "seis",
    "siete","diez", "once", "doce"
  };
for(int i = 0; i < n; i++){
  for (int j = 0; j < 3; j++) {
    printf("%s de %s\n", numeros[rand()%10], palo[rand()%4]);
   }
 }

return 0;
}
