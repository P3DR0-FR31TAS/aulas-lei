#include <stdio.h>

int ordenado(int array[], int tam)
{

    int ordenado = 1;

    for (int i = 0; i < tam - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            return 0;
        }
    }

    return ordenado;
}

int main()
{
    int array[5] = {2, 1, 3, 4, 5};

    printf("%d", ordenado(array, 5));

    return 0;
}