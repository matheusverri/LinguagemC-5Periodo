#include <stdio.h>

int main(void){

  float lado1, lado2, perimetro;

  fflush(stdin);
  printf("Insira o valor do primeiro lado: \n");
  scanf("%f", &lado1);

  fflush(stdin);
  printf("Insira o valor do segundo lado: \n");
  scanf("%f", &lado2);

  perimetro = (lado1*3);

  printf("O perímetro do triângulo é: %.2f\n", perimetro);

  return 0;
}