#include <stdio.h>

int main(void)
{

    int tamVetor, i;
    int vetorA[10], vetorB[10];
    int somaVetor[10];

    scanf("%d", &tamVetor);

    if (tamVetor > 10)
    {
        printf("Muitos elementos");
    }
    else
    {
        for (i = 0; i < tamVetor; i++)
        {
            scanf("%d", &vetorA[i]);
        }
        for (i = 0; i < tamVetor; i++)
        {
            scanf("%d", &vetorB[i]);
        }

        for (i = 0; i < tamVetor; i++)
        {
            somaVetor[i] = vetorA[i] + vetorB[i];
            printf("%d ", somaVetor[i]);
        }
    }

    return 0;
}