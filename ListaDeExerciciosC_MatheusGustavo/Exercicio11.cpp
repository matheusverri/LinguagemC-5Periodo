#include <stdio.h>

int main(void){

  float a, b, c, resultado;
  
  fflush(stdin);
  printf("Insira o valor A: \n");
  scanf("%f", &a);

  fflush(stdin);
  printf("Insira o valor B: \n");
  scanf("%f", &b);

  fflush(stdin);
  printf("Insira o valor C: \n");
  scanf("%f", &c);

  resultado = (a-b)*c;

  printf("resultado: %.2f\n", resultado);



  return 0;
}