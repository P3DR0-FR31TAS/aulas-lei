#include <stdio.h>

int main(void)
{
    int items;
    float prices[10];
    float total;
    
    do
    {
        printf("Insira a quantidade de produtos(Min: 1, Max: 10):");
        scanf("%d", &items);
        printf("\n");

    } while (items < 1 || items > 10);

    for (int i = 0; i < items; i++)
    {
        printf("Insira o elemento numero %d: ", i+1);
        scanf("%f", &prices[i]);

        total = total + prices[i];
    }
    
    printf("O total e de: %.2f euros", total);


	return 0;
}
