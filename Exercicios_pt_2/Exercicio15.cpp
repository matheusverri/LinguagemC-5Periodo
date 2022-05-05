#include <stdio.h>

int main(void){

  int opcao;

  printf("1 = Bom dia!\n");
  printf("2 = Boa tarde!\n");
  printf("3 = Boa noite!\n");
  printf("4 = Até mais!\n");

  fflush(stdin);
  printf("Selecione uma opção:\n");
  scanf("%d", &opcao);

  switch(opcao){
    case 1:
      printf("Bom dia!\n");
    break;
    case 2:
      printf("Boa tarde!\n");
    break;
    case 3:
      printf("Boa noite!\n");
    break;
    case 4:
      printf("Até mais!\n");
    break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;
}