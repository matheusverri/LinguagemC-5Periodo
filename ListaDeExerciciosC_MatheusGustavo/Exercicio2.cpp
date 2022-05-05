#include <stdio.h>

int main(void){
  float num1, num2;

  fflush(stdin);
  printf("Insira um número: \n");
  scanf("%f", &num1);

  fflush(stdin);
  printf("Insira outro número: \n");
  scanf("%f", &num2);

  float soma = num1+num2;
  float subtracao = num1-num2;

  printf("soma: %.2f \n", soma);
  printf("subtração: %.2f \n", subtracao);


  return 0;
}