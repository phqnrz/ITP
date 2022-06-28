#include <stdio.h>
#include <string.h>

int main()
{
    char original[100] = "Meu tesouro! Nao se misture com essa gentalha!";
    char pirata[100];

    strcpy(pirata, original);
    //strncpy(pirata, original, 12); // Saída vai ser "Meu tesouro!" apenas

    printf("%s\n", pirata);

    return 0;
}