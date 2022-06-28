#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct camp {
    char nome[50];
    int gols_marcados, gols_sofridos;

} times;

void ordem_camp(times *clube, int *tamVetor)
{
    times aux;

    for (int i = 0; i < *tamVetor - 1; i++)
    {
        for (int j = i + 1; j < *tamVetor; j++)
        {
            if (clube[i].gols_marcados < clube[j].gols_marcados)
            {
                aux = clube[i];
                clube[i] = clube[j];
                clube[j] = aux;
            }
        }
    }
}

int main(void)
{
    times *clube;
    int qntd;
    char buffer[50];

    scanf("%d", &qntd);

    clube = malloc(sizeof(times) * qntd);
    for (int i = 0; i < qntd; i++)
    {
        fgetc(stdin);
        fgets(clube[i].nome, 50, stdin);
        clube[i].nome[strlen(clube[i].nome) - 1] = 0;
        scanf("%d\n", &clube[i].gols_marcados);
        scanf("%d", &clube[i].gols_sofridos);
    }
    ordem_camp(clube, &qntd);

    for (int i = 0; i < qntd; i++)
    {
        printf("%d - %s\n", i + 1, clube[i].nome);
        printf("Gols marcados: %d\n", clube[i].gols_marcados);
        printf("Gols sofridos: %d\n", clube[i].gols_sofridos);
    }

    return 0;
}