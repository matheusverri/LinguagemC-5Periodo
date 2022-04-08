#include <stdio.h>

int main(void){

  float peso, altura, imc;

  fflush(stdin);
  printf("Insira sua altura: ");
  scanf("%f", &altura);

  fflush(stdin);
  printf("Insira seu peso: ");
  scanf("%f", &peso);

  imc = peso/(altura*altura);

  printf("Seu IMC é de: %.2f\n", imc);
  
  if (imc < 18.49)
    printf("Sua categoria é: Baixo peso.\n");
  else if (imc < 24.99)
    printf("Sua categoria é: Peso ideal.\n");
  else if (imc < 29.99)
    printf("Sua categoria é: Sobrepeso.\n");
  else
    printf("Sua categoria é: Obeso.\n");




  return 0;
}