#include <stdio.h>
#include <string.h>
#define tamPalav 50
#define qtdPalav 20

// declarando função strsplit
void strsplit(char string[tamPalav], char delimitador, char vetor[tamPalav][qtdPalav], int tam)
{
    for (int i = 0, l = 0, d = 0; string[i] != 0; i++) {
        if (string[i] != delimitador && string[i] != '\n') {
            vetor[l][d++] = string[i];
        } else {
            l++;
            d = 0;
        }
    }
}

int main(void) 
{

    char string[50] = {0};
    char vetor[20][50] = {0};
    char delimitador;

    fgets(string, 50, stdin);
    scanf("%c", &delimitador);
    strsplit(string, delimitador, vetor, tamPalav);

    for (int l = 0; l < qtdPalav; l++) {
        if (vetor[l][0] != 0) {
            printf("%s\n", vetor[l]);
        }
    }
    
    return 0;
}