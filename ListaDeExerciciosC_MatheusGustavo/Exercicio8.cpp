#include <stdio.h>

int main(void){

  float raio, area;
  float pi = 3.14;
  
  fflush(stdin);
  printf("Insira o valor do raio: \n");
  scanf("%f", &raio);

  area = pi * (raio*raio);

  printf("A área da circunferência é: %f\n", area);

  return 0;
}