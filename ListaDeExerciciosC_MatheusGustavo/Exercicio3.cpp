#include <stdio.h>

int main(void){
  float num1, num2;

  fflush(stdin);
  printf("Insira um número: \n");
  scanf("%f", &num1);

  fflush(stdin);
  printf("Insira outro número: \n");
  scanf("%f", &num2);

  float media = (num1+num2)/2;


  printf("Média: %.2f \n", media);


  return 0;
}