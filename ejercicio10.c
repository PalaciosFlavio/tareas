#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int mazo[40];
  char *palo[4] = {"oro","espada", "basto", "copa"};
  char *numero[10] = {"ancho", "dos", "tres", "cuatro", "cinco", "seis", "siete", "sota", "caballo", "rey"};
  printf("%s de %s\n", numero[rand() % 10 ], palo[rand() % 4 ]);
  printf("%s de %s\n", numero[rand() % 10 ], palo[rand() % 4 ]);
  printf("%s de %s\n", numero[rand() % 10 ], palo[rand() % 4 ]);
  return 0;
}
