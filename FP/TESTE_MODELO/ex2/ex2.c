#include <stdio.h>

int devolverUltimaPosicao(char s[], char a) {

    int i = 0;
    int ultima_posicao = 0;
    int existe = 0;

    while (s[i] != '\0')
    {
        if (s[i] == a)
        {
            ultima_posicao = i;
            existe = 1;
        }

        i++;
    }

    if (existe == 0)
    {
        return -1;
    }
    
    return ultima_posicao;
}

int main()
{
    char string[14] = "Pedro Freitas";
    char letra = 'a';

    printf("Ultima posicao encontrada da letra %c: %d", letra, devolverUltimaPosicao(string, letra));
    
    return 0;
}
