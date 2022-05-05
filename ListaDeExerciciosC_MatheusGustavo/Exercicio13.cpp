#include <stdio.h>

int main(void){

  float nota1, nota2, peso1, peso2, resultado;
  
  fflush(stdin);
  printf("Insira a nota 1: \n");
  scanf("%f", &nota1);

  fflush(stdin);
  printf("Insira a nota 2: \n");
  scanf("%f", &nota2);

  fflush(stdin);
  printf("Insira o peso da nota 1: \n");
  scanf("%f", &peso1);

  fflush(stdin);
  printf("Insira o peso da nota 2: \n");
  scanf("%f", &peso2);

  resultado = (peso1*nota1) + (peso2*nota2) / peso1 + peso2;

  printf("resultado: %.2f\n", resultado);



  return 0;
}