#include <stdio.h>

int main() {

  int a, b;

  printf("Introduza o primeiro valor: ");
  scanf("%d", &a);

  printf("Introduza o segundo valor: ");
  scanf("%d", &b);

  a = a ^ b;
  b = a ^ b;
  a = a ^ b;

  printf("\na: %d b: %d", a, b);

  return 0;
}