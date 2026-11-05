#include <stdio.h>

int main() {

    int a, b;

    printf("Introduza o primeiro operando: ");
    scanf("%d", &a);
    printf("Introduza o segundo operando: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, a+b);
    printf("\n%d - %d = %d", a, b, a-b);
    printf("\n%d x %d = %d", a, b, a*b);
    printf("\n%d / %d = %d", a, b, a/b);

    return 0;
}