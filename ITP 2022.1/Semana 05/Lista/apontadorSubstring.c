#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 40

int main (void) {

    char stringA[TAM];
    char stringB[TAM];
    //char *substring;

    scanf("%s", stringA);

    for (int i = 0; i < strlen(stringA); i++)
        stringA[i] = toupper(stringA[i]);

    printf("%s\n", stringA);

    for (int i = 0; i < strlen(stringA); i++)
        stringA[i] = tolower(stringA[i]);

    printf("%s\n", stringA);

    

    return 0;
}

//strlen
//strstr
//toupper tolower

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char strA[40] = {0}, strB[40] = {0};
    char *substring;
    fgets(strB, 40, stdin);
    fgets(strA, 40, stdin);

    int lenA = strlen(strA);
    if (lenA > 0 && strA[lenA - 1] == '\n')
    {
        strA[lenA - 1] = '\0';
    }

    int lenB = strlen(strB);
    if (lenB > 0 && strB[lenB - 1] == '\n')
    {
        strB[lenB - 1] = '\0';
    }

    for (int i = 0; i < strlen(strA); i++)
        strA[i] = tolower(strA[i]);

    for (int i = 0; i < strlen(strB); i++)
        strB[i] = tolower(strB[i]);

    substring = strstr(strA, strB);
    char substr[strlen(strB)];

    int count = 0;

    substr[strlen(strB)] = '\0';

    for (int i = 0; strA[i] != '\0'; i++)
    {
        if (strcmp(substring, strB) > 0)
        {
            strncpy(substr, strB, strlen(strB));
            count++;
            printf("%s\n", substr);
        }
    }

    printf("%d\n", count);

    return 0;
}