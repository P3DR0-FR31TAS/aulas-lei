#include <stdio.h>

#define COLS 3

int totalParesMatriz(int linhas, int colunas, int matriz[][COLS]) {

    int n_pares = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                n_pares++;
            }       
        }
    }

    return n_pares;
    
}

int main() {

    int minhaMatriz[2][COLS] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int total_pares = totalParesMatriz(2, COLS, minhaMatriz);
    printf("%d", total_pares );

    return 0;
}