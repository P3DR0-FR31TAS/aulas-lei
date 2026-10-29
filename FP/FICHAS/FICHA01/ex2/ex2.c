#include <stdio.h>

int main() {

    int aluno1, aluno2, aluno3;

    printf("Insira a idade do aluno 1: ");	
    scanf("%d",	&aluno1);	
    printf("Insira a idade do aluno 2: ");	
    scanf("%d",	&aluno2);	
    printf("Insira a idade do aluno	3: ");	
    scanf("%d",	&aluno3);	
    printf("A media de idades e: %d", (aluno1+aluno2+aluno3) / 3);		

    return 0;
}