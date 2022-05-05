#include <stdio.h>

int main(void){

  float numerador, denominador, divisao;
  
  fflush(stdin);
  printf("Insira o numerador: \n");
  scanf("%f", &numerador);

  fflush(stdin);
  printf("Insira o denominador: \n");
  scanf("%f", &denominador);

  divisao = numerador/denominador;

  printf("A parte inteira da divisão é: %.0f \n", divisao);

  return 0;
}