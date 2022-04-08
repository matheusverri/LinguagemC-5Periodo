#include <stdio.h>

int main(void){

  float temperatura_agua;

  fflush(stdin);
  puts("Insira a temperatura da água: ");
  scanf("%f", &temperatura_agua);

  if (temperatura_agua <= 0)
    printf("A água está congelada!\n");

  if (temperatura_agua > 0 && temperatura_agua < 100)
    printf("A água está em estado liquido!\n");

  if (temperatura_agua >= 100)
    printf("A água está fervendo!\n");

  return 0;
}