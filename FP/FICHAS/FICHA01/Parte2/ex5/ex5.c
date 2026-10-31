/*
  Escreva um programa que calcule a duração (no formato hh:mm:ss) de um álbum musical com 5
  canções. A duração de cada canção é lida em minutos e segundos.
*/

#include <stdio.h>

int main()
{

  int m1, s1, m2, s2, m3, s3, m4, s4, m5, s5;

  printf("Introduza em minutos e segundos a duracao das musicas");
  printf("\nIntroduza a duracao da primeira musica");
  scanf("%d:%d", &m1, &s1);

  printf("\nIntroduza a duracao da segunda musica");
  scanf("%d:%d", &m2, &s2);

  printf("\nIntroduza a duracao da terceira a musica");
  scanf("%d:%d", &m3, &s3);

  printf("\nIntroduza a duracao da quarta musica");
  scanf("%d:%d", &m4, &s4);

  printf("\nIntroduza a duracao da quinta musica");
  scanf("%d:%d", &m5, &s5);

  int total_min = m1 + m2 + m3 + m4 + m5;
  int total_seg = s1 + s2 + s3 + s4 + s5 + (total_min * 60);

  int horas = total_seg / 3600;
  int minutos_finais = (total_seg % 3600) / 60;
  int segundos_finais = total_seg % 60;

  printf("Duracao total do album: %d:%d:%d\n", horas, minutos_finais, segundos_finais);

  return 0;
}