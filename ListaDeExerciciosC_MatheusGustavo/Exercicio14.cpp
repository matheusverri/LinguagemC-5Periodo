#include <stdio.h>

int main(void){

  float fahrenheit, centigrados;
  
  fflush(stdin);
  printf("Insira a temperatura em fahrenheit: \n");
  scanf("%f", &fahrenheit);

  centigrados = (fahrenheit-32)*5/9;

  printf("Conversão em centígrados: %f\n", centigrados);



  return 0;
}