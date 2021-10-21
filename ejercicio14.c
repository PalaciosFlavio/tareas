#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char *mazo[40];
  char *palo[4] = {"oro", "espada", "basto", "copa"};
  char *numeros[10] = {
    "uno", "dos", "tres",
    "cuatro", "cinco", "seis",
    "siete","diez", "once", "doce"
  };
for(int i = 0; i < 4; i++){
  for (int j = 0; j < 10; j++) {
    printf("%s de %s\n", numeros[j], palo[i]);
   }
 }

return 0;
}
