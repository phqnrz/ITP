#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // para usar a função strlen()

#define TAMANHO_STR 20

int main()
{
    char nome[TAMANHO_STR+1];
    char num_str[TAMANHO_STR+1];
    int num;

    setlocale(LC_ALL, ("Portuguese"));

    printf("\t\tLETRA DO ALFABETO\n ");
    printf("\n\nOla, digite aqui seu nome: ");
    fgets(nome, TAMANHO_STR+1, stdin);

    int l = strlen(nome); // descobre o comprimento da string
    if (l > 0 && nome[l-1] == '\n') // se a string não é vazia e o último caractere é \n
        nome[l-1] = 0; // define último caractere como \0

    printf(" \n\nOla %s, digite aqui o numero para saber qua letra ele representa: ",nome);

    fgets(num_str, TAMANHO_STR+1, stdin);
    num = atoi(num_str);

    printf("\n\n%s, o numero %d representa a letra %c\n\n", nome, num, (char) num);

    return 0;
}