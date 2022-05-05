#include <stdio.h>

int main(void){

  float x, y, z, resultado;
  
  fflush(stdin);
  printf("Insira o valor A: \n");
  scanf("%f", &x);

  fflush(stdin);
  printf("Insira o valor B: \n");
  scanf("%f", &y);

  fflush(stdin);
  printf("Insira o valor C: \n");
  scanf("%f", &z);

  resultado = ((x-5)*y)-z;

  printf("resultado: %.2f\n", resultado);



  return 0;
}