#include <stdio.h>

int main(void){

  float nota1, nota2, media;

  fflush(stdin);
  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);

  fflush(stdin);
  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);

  media = (nota1+nota2)/2;

  printf("A média de %2.f + %2.f é: %.2f\n", nota1, nota2, media);


  return 0;
}