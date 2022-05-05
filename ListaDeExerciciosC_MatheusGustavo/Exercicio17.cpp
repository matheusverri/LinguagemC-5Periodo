#include <stdio.h>

int main(void){

  float segundos, hora;

  fflush(stdin);
  printf("Insira um valor em segundos: \n");
  scanf("%f", &segundos);

  hora = segundos/3600;

  printf("Segundos em horas: %.2f", hora);

  return 0;
}