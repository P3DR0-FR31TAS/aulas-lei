#include <stdio.h>

int main() {

  float a, b, c;

  printf("Insira o primeiro valor: ");
  scanf("%f", &a);
  printf("Insira o segundo valor: ");
  scanf("%f", &b);
  printf("Insira o terceiro valor: ");
  scanf("%f", &c);

  float media_aritmetica = (a + b + c) / 3;
  float media_ponderada = (a * 0.2) + (b * 0.3) + (c * 0.5);

  printf("\nMedia aritmetica = %.2f", media_aritmetica);
  printf("\nMedia ponderada = %.2f", media_ponderada);

  return 0;
}