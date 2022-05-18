#include <stdio.h>

int main(void)
{
    char texto[10];

    /*
    texto[0] = 'T';
    texto[1] = 'e';
    texto[2] = 's';
    texto[3] = 't';
    texto[4] = 'e';
    texto[5] = '\0';
    */
    scanf("%s", texto);
    printf("%s\n", texto);
    scanf("%s", texto);
    printf("%s\n", texto);

    return 0;
}