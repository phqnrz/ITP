#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = {0};

    scanf("%s", string);

    printf("%d\n", (int)strlen(string));

    return 0;
}