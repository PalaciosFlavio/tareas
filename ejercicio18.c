#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
 char *codigo[] = {
   ".-",
   "-...",
   "-.-.",
   "-..",
   ".",
   "..-.",
   "--.",
   "...."
 };
 int i = 0;
 while (argv[1][i] != 0) {
   printf("%s ", codigo[argv[1][i] - 97]);
   i++;
 }

 printf("\n");

 return 0;
}
