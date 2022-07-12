#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100] = "The Jedi";
    char string2[100] = " are here!";

    //strcat(string1, string2);
    strncat(string1, string2, 7); //Concatena apenas os 5 primeiros caracteres de string2 em string1

    printf("%s\n", string1);

    return 0;
}