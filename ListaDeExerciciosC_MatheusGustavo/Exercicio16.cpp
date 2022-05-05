#include <stdio.h>

int main(void){

  float valor_bruto;

  fflush(stdin);
  printf("Insira o total da compra: \n");
  scanf("%f", &valor_bruto);

  float desconto_dez_por_cento = valor_bruto-(valor_bruto*0.1);
  float parcela_tres_vezes = valor_bruto/3;
  float comissao_pagamento_a_vista = desconto_dez_por_cento*0.05;
  float comissao_pagamento_parcelado = valor_bruto*0.05;

  printf("Valor com desconto de 10 por cento: %.2f\nValor da parcela em três meses: %.2f\nComissão no caso de compras à vista: %.2f\nComissao no caso de compras parceladas: %.2f\n", desconto_dez_por_cento, parcela_tres_vezes, comissao_pagamento_a_vista, comissao_pagamento_parcelado);

  return 0;
}