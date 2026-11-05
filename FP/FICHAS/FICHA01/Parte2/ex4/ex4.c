#include <stdio.h>

int main() {

  float val1, val2, val3;

  printf("Introduza o primeiro valor: ");
  scanf("%f", &val1);
  
  printf("Introduza o segundo valor: ");
  scanf("%f", &val2);
  
  printf("Introduza o terceiro valor: ");
  scanf("%f", &val3);
  
  float total_bruto = val1 + val2 + val3;
  float desconto = total_bruto * (10.0/100.0); // 10% desconto
  float total = total_bruto - desconto;

  printf("Total a pagar: %.2f", total);

  return 0;
}
