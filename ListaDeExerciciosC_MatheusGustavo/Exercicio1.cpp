#include <stdio.h>

int main(void){
  float num1, num2;

  fflush(stdin);
  printf("Insira um número: \n");
  scanf("%f", &num1);

  fflush(stdin);
  printf("Insira outro número: \n");
  scanf("%f", &num2);

  printf("Os números inseridos foram: %.2f e %.2f \n", num2, num1);

  return 0;
}