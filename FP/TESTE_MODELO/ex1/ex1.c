#include <stdio.h>

int contaEspaçosEmBranco(char s[]) {

    int contador = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if(s[i] == ' ') {
            contador++;
        }

        i++;
    }
    
    return contador;
}

int main() {
    char string[34] = "Fundamentos de programacao em c  ";

    printf("%d", contaEspaçosEmBranco(string));

    return 0;
}