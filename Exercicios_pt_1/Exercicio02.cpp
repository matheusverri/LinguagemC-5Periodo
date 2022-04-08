#include <stdio.h>

int main(void){

  float num1, num2, num3, num4, media;

  fflush(stdin);
  printf("Insira o número 1: \n");
  scanf("%f", &num1);

  fflush(stdin);
  printf("Insira o número 2: \n");
  scanf("%f", &num2);

  fflush(stdin);
  printf("Insira o número 3: \n");
  scanf("%f", &num3);

  fflush(stdin);
  printf("Insira o número 4: \n");
  scanf("%f", &num4);

  media = (num1 + num2 + num3 + num4)/4;

  printf("A média entre %.2f, %.2f, %.2f e %.2f é: %.2f \n", num1, num2, num3, num4, media);

  return 0;
}