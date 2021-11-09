#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N_random(int a, int b) {

  return rand() % (b - a + 1)+ a;
}



int main(int argc, char *argv[]) {

int a = atoi(argv[1]);
int b = atoi(argv[2]);

printf("%d\n", N_random(a, b));
return 0;
}
