#include <stdio.h>

int main(void){

  float lado1, lado2, area;

  fflush(stdin);
  printf("Insira o valor do primeiro lado: \n");
  scanf("%f", &lado1);

  fflush(stdin);
  printf("Insira o valor do segundo lado: \n");
  scanf("%f", &lado2);

  area = lado1 * lado2;

  printf("A área do quadrado é: %.2f\n", area);

  return 0;
}