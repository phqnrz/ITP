#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct table
{
    char name[50];
    int vit, der, emp, gf, gs;
    int pontos;
    int num_tot;
    int saldo_g;
} camp;

void preenche(char buffer[], camp *tabela, int *pos)
{
    int i = *pos;
    char *parte;
    parte = strtok(buffer, ";");
    strcpy(tabela[i].name, "\0");
    strcpy(tabela[i].name, parte);

    parte = strtok(NULL, "\n");
    sscanf(parte, " %d %d %d %d %d", &tabela[i].vit, &tabela[i].emp, &tabela[i].der, &tabela[i].gf, &tabela[i].gs);

    tabela[i].pontos = tabela[i].vit * 3 + tabela[i].emp;
    tabela[i].num_tot = tabela[i].vit + tabela[i].der + tabela[i].emp;
    tabela[i].saldo_g = tabela[i].gf - tabela[i].gs;
}

void ordenar(camp *tabela, int *pos)
{
    camp aux;

    for (int i = 0; i < *pos - 1; i++)
    {
        for (int j = i + 1; j < *pos; j++)
        {
            if (tabela[i].pontos < tabela[j].pontos)
            {
                aux = tabela[i];
                tabela[i] = tabela[j];
                tabela[j] = aux;
            }
            else if (tabela[i].pontos == tabela[j].pontos && tabela[i].vit < tabela[j].vit)
            {
                aux = tabela[i];
                tabela[i] = tabela[j];
                tabela[j] = aux;
            }
            else if (tabela[i].pontos == tabela[j].pontos && tabela[i].vit == tabela[j].vit && tabela[i].saldo_g < tabela[j].saldo_g)
            {
                aux = tabela[i];
                tabela[i] = tabela[j];
                tabela[j] = aux;
            }
        }
    }
}

void imprimir(camp *tabela, int *pos)
{
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
    for (int i = 0; i < *pos; i++)
    {
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d\n", tabela[i].name, tabela[i].pontos, tabela[i].num_tot, tabela[i].vit, tabela[i].emp, tabela[i].der, tabela[i].gf, tabela[i].gs, tabela[i].saldo_g);
    }
    printf("\n");
    printf("Times na zona da libertadores:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%s\n", tabela[i].name);
    }
    printf("\n");
    printf("Times rebaixados:\n");
    for (int j = *pos - 1; j > *pos - 5; j--)
    {
        printf("%s\n", tabela[j].name);
    }
}

int main(void)
{
    camp *tabela;
    int num;
    char buffer[100];

    scanf("%d\n", &num);

    tabela = malloc(sizeof(camp) * num);

    int i = 0;
    for (i = 0; i < num; i++)
    {
        fgets(buffer, 100, stdin);
        preenche(buffer, tabela, &i);
    }
    ordenar(tabela, &num);

    imprimir(tabela, &num);

    return 0;
}