#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100] = "The North Remembers";
    char string2[100] = "North";
    char *substring;

    substring = strstr(string1, string2);

    if (substring != NULL)
        printf("%s eh substring de %s\n", string2, string1);
    else
        printf("%s nao eh substring de %s\n", string2, string1);

    return 0;
}