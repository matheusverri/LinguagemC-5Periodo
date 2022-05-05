#include <stdio.h>

int main(void){

  float raio, circunferencia;
  float pi = 3.14;
  
  fflush(stdin);
  printf("Insira o valor do raio: \n");
  scanf("%f", &raio);

  circunferencia = 2*pi*raio;

  printf("A circunferência é: %f\n", circunferencia);

  return 0;
}