#include <stdio.h>

int main(void){

  float num1, num2, soma, subtracao;

  fflush(stdin);
  printf("Digite o primeiro número: \n");
  scanf("%f", &num1);

  fflush(stdin);
  printf("Digite o segundo número: \n");
  scanf("%f", &num2);

  soma = num1 + num2;
  subtracao = num1 - num2;

  printf("Soma: %2.f\n", soma);
  printf("Subtração: %2.f\n", subtracao);

  return 0;
}