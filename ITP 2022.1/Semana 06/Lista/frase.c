#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void exibir(char frase[])
{
    int value = (frase[0] - '0') * 100 + (frase[1] - '0') * 10 + (frase[2] - '0');
    int tam = strlen(frase);
    if (value >= 0 && tam == value && frase[value] == '\0')
    {
        printf("%d == %d OK!", tam, value);
    }
    else
    {
        printf("Resultado inesperado! Um \\n talvez?");
    }
}

int main(void)
{
    int n = 16;
    char buffer[n];
    int pare = 0;
    int len = 0;
    char *frase = malloc(sizeof(char) * n);
    while (pare == 0)
    {
        if (len == n)
        {
            n *= 2;
            frase = realloc(frase, n);
        }
        fgets(buffer, 16, stdin);
        len += strlen(buffer);
        strcat(frase, buffer);

        if (strchr(buffer, '\n') > 0)
        {
            pare = 1;
        }
    }
    int tam;
    tam = strlen(frase) - 1;

    frase[tam] = '\0';
    exibir(frase);

    free(frase);
    return 0;
}