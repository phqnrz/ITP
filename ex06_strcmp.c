#include <stdio.h>
#include <string.h>

#define TAM 100

int main()
{
    char string1[TAM];
    char string2[TAM];

    scanf("%s", string1);
    scanf("%s", string2);

    printf("Comparando %s e %s: ", string1, string2);

    //int res = strcmp(string1, string2);
    int res = strncmp(string1, string2, 10); // Compara as 10 primeiras letras

    if (res == 0)
        printf("Iguais\n");
    else if (res > 0)
        printf("%s eh maior\n", string1);
    else
        printf("%s eh menor\n", string1);

    return 0;
}