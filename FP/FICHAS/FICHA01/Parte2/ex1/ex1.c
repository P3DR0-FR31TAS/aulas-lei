#include <stdio.h>

int main() {

  char letra;

  printf("Introduza um caracter: ");
  scanf("%c", &letra);

  printf("\nAntecessor %c", letra - 1);
  printf("\nSucessor %c", letra + 1);

  return 0;
}
