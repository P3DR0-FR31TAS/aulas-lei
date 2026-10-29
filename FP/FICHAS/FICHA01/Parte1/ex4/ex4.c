#include <stdio.h>

int main() {

  int altura, comprimento;

  printf("Insira o comprimento do retangulo: ");
  scanf("%d", &comprimento);
  printf("Insira a altura do retangulo: ");
  scanf("%d", &altura);

  int area_retangulo = altura * comprimento;
  int perimetro_retangulo = 2 * (altura + comprimento);

  printf("A area do retangulo e = %d", area_retangulo);
  printf("\nO perimetro do retangulo e = %d", perimetro_retangulo);


  float diametro;

  printf("\n\nInsira o diametro da circumferencia: ");
  scanf("%f", &diametro);

  float perimetro_circum = 3.14 * diametro;
  float raio = diametro / 2;
  float area_circum = 3.14 * raio * raio;
 
  printf("Area: %.2f", area_circum);
  printf("\nPerimetro: %.2f", perimetro_circum);

  float base, altura_trian;

  printf("\n\nInsira a base do triangulo: ");
  scanf("%f", &base);
  printf("Insira a altura do triangulo: ");
  scanf("%f", &altura_trian);

  float area_trian = (base * altura_trian) / 2;
  printf("A area do triangulo e = %.2f", area_trian);

  return 0;
}