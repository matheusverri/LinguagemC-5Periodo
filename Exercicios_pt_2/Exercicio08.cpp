#include <stdio.h>

int main(void){

  float produto1, produto2;

  fflush(stdin);
  printf("Insira o valor do primeiro produto: ");
  scanf("%f", &produto1);

  fflush(stdin);
  printf("Insira o valor do segundo produto ");
  scanf("%f", &produto2);

  produto1 > produto2 ? printf("O primeiro é maior! \n") : printf("O primeiro não é maior! \n");


  return 0;
}