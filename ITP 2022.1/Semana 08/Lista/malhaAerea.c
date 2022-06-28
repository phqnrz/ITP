#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[30];
    char pais[20];
    int naeros;
} Cidade;

void lerString(char strdst[])
{
    char str[30] = {0};
    fgets(str, 30, stdin);
    str[strlen(str) - 1] = '\0';
    strcpy(strdst, str);
}

int main(void)
{
    int n, c;
    char lixo;
    // lê número de cidades
    scanf("%d", &n);
    scanf("%c", &lixo);
    // lê as n cidades
    Cidade cidades[n];
    for (int i = 0; i < n; i++)
    {
        lerString(cidades[i].nome);
        lerString(cidades[i].pais);
        scanf(" %d", &cidades[i].naeros);
        scanf("%c", &lixo);
    }
    // lê a matriz de preços das passagens
    int precos[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &precos[i][j]);
        scanf("%c", &lixo);
    }
    // lê a cidade c de destino
    scanf("%d", &c);
    printf("Voo mais barato chegando em %s: ", cidades[c].nome);
    int d, menor = 999999;
    // analisa o voo +barato para o destino c
    for (int i = 0; i < n; i++)
        if (i != c && precos[i][c] != -1 && precos[i][c] < menor)
        {
            menor = precos[i][c];
            d = i;
        }
    // exibe resultado
    printf("%s (%s) - %d aeroporto(s) - R$%d\n", cidades[d].nome,
           cidades[d].pais, cidades[d].naeros, precos[d][c]);
    return 0;
}