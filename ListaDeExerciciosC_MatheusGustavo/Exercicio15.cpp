#include <stdio.h>

int main(void){

  float qtd_litros, gasto_total, distancia, preco_gasolina;

  distancia = 520;
  preco_gasolina = 2.60;

  qtd_litros = distancia/12;
  gasto_total = qtd_litros*preco_gasolina;

  printf("Litros gastos: %.2f. Gasto total em reais: R$%2f.", qtd_litros, gasto_total);

  return 0;
}