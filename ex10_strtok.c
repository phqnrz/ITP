#include <stdio.h>
#include <string.h>

int main()
{
    char texto[] = "Andre - Atacante - mil gols - campeao mundial - melhor que Pele";
    char *pedaco;

    pedaco = strtok(texto, "-");

    while (pedaco != NULL)
    {
        printf("%s\n", pedaco);

        pedaco = strtok(NULL, "-");
    }

    return 0;
}