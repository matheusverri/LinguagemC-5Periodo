#include <stdio.h>

int main(void){

  float produto1, produto2;

  fflush(stdin);
  puts("Insira o valor do produto 1: ");
  scanf("%f", &produto1);

  fflush(stdin);
  puts("Insira o valor do produto 2: ");
  scanf("%f", &produto2);

  if (produto1 > produto2) 
    printf("O produto 1 é maior. \n");
  else if (produto1 < produto2)
    printf("O produto 2 é maior. \n");
  else
    printf("Os valores são iguais. \n");


  return 0;
}