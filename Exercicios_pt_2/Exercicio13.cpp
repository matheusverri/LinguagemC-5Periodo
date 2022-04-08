#include <stdio.h>

int main(void){

  float renda;

  fflush(stdin);
  printf("Insira sua renda: ");
  scanf("%f", &renda);


  if (renda < 1254)
    printf("Sua classe: E\n");
  else if (renda < 2004)
    printf("Sua classe: D\n");
  else if (renda < 8640)
    printf("Sua classe: C\n");
  else if (renda < 11261)
    printf("Sua classe: B\n");
  else 
    printf("Sua classe: A\n");



  return 0;
}