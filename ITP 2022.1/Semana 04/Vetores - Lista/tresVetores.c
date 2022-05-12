#include <stdio.h>
#define tam 20

void imprimeVetor(char name[], int vetor[], int tamVet)
{
    printf("%s", name);
    for (int i = 0; i < tamVet; i++)
    {
        printf("%d", vetor[i]);
        if (i < (tamVet - 1))
        {
            printf(",");
        }
        else
        {
            printf("\n");
        }
    }
}

int main()
{
    int A[tam], vetorA[tam], vetorB[tam], vetorC[tam];
    int contA = 0, contB = 0, contC = 0;

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] % 3 == 0)
        {
            vetorA[contA++] = A[i];
        }
        if (A[i] % 4 == 0)
        {
            vetorB[contB++] = A[i];
        }
        if ((A[i] % 3 != 0) && A[i] % 4 != 0)
        {
            vetorC[contC++] = A[i];
        }
    }
    imprimeVetor("a)", vetorA, contA);
    imprimeVetor("b)", vetorB, contB);
    imprimeVetor("c)", vetorC, contC);

    return 0;
}
