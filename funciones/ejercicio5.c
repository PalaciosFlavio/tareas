#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcular(double a, double b, double c){
  double x = b * b - 4 * a * c;
  double r = sqrt(x);
  double rmas = (-b + r) / 2 * a;
  double rmen = (-b - r) / 2 * a;
  if(x <= 0 || a== 0) {
    printf("nan\n");
}else{
  printf("R1 = %.2f, R2 = %.2f\n", rmas, rmen);
  }
}

int main(int argc, char *argv[]){
  double ax = atof(argv[1]);
  double by = atof(argv[2]);
  double cz = atof(argv[3]);
  calcular(ax, by, cz);
  return 0; 
}
