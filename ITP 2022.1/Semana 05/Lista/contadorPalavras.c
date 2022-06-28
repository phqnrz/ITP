#include <stdio.h>
#include <string.h>
#define tamtxt 200

// declarando função leitor de linha
void read_line(char linha[], int tam, FILE *f)
{

    fgets(linha, tam, f);

    while (linha[0] == '\n')
        fgets(linha, tam, f);

    if (linha[strlen(linha) - 1] == '\n')
        linha[strlen(linha) - 1] = '\0';
}

int main(void)
{

    int n, i, j;
    char string[tamtxt] = {0};

    scanf("%d", &n);

    char texto[n][tamtxt];
    int tam[n], tamProxMed[n];
    int tamMin = 0, tamMax = 0;
    float tamMedio = 0, tamTotal = 0;

    for (i = 0; i < n; i++)
    {

        read_line(string, tamtxt, stdin);
        strcpy(texto[i], string);
    }

    for (i = 0; i < n; i++)
    {

        tam[i] = 0;
        tamMax = tam[0];
        tamMin = tam[0];

        for (j = 0; texto[i][j] != '\0'; j++)
        {
            tam[i] += 1;
            tamTotal += 1;
        }
    }

    tamMedio = tamTotal / n;
    tamProxMed[0] = tam[0] - tamMedio;

    int aux, min;
    char minTexto[tamtxt] = {0};

    aux = tamProxMed[0];
    min = tam[0];

    strcpy(minTexto, texto[0]);

    for (i = 0; i < n; i++)
    {

        tamProxMed[i] = tam[i] - tamMedio;
        if (tamProxMed[i] < 0)
        {
            tamProxMed[i] = tamProxMed[i] * (-1);
        }
        if (aux > tamProxMed[i])
        {
            aux = tamProxMed[i];
            strcpy(minTexto, texto[i]);
            min = tam[i];
        }
    }

    for (int i = 1; i < n; i++)
    {

        if (tam[i] > tam[i - 1] && tam[i] > tam[0])
            tamMax = tam[i];

        if (tam[i] < tam[i - 1])
            tamMin = tam[i];
    }

    printf("Tamanho máximo: %d\n", tamMax);
    printf("Tamanho mínimo: %d\n", tamMin);
    printf("Tamanho médio: %.2f\n", tamMedio);
    printf("Tamanho mais próximo da média %d\n", min);
    printf("Textos\n");
    printf("%s", minTexto);

    return 0;
}