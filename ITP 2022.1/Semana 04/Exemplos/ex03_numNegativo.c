#include <stdio.h>

int main (void){

    int vetor[10];
    int i;

    // Lendo valores para preencher o vetor
    for (i = 0; i < 5; i++)
        scanf("%d", &vetor[i]);

    // Laço para procurar valores negativos no vetor
    for (i = 0; i < 5; i++)
        printf("\nPosicao %d: %d", i, vetor[i]);
        if (vetor[i] < 0)
            printf("Achei um! %d\n", vetor[i]);
    
    return 0;
}