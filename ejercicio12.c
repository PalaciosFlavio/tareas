#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int length = 0;
  while (argv[1][length] !=0) {
    length++;
  }
  printf("%s tiene %d chars\n", argv[1], length);
  bool es_palindromo = true;
  for (int i =0; i < length/2; i++){
    if (!(argv[1][i] == argv[1][length-i-1]))
    es_palindromo = false;
  }
if (es_palindromo) printf("palindromo!\n");
  return 0;
}
