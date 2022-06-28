#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[500];

    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++)
        string[i] = toupper(string[i]);

    printf("%s\n", string);

    for (int i = 0; i < strlen(string); i++)
        string[i] = tolower(string[i]);

    printf("%s\n", string);

    return 0;
}