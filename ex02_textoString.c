#include <stdio.h>

int main(void)
{
   
    char texto[100];
    char nome[50];
    int idade;
    double altura;


    //boas práticas, maneira mais segura
    //fgets(texto, 99, stdin);

    //quando tem o símbolo ^ significa negação, prática perigosa
    //scanf("%[^\n]", texto);

    fgets(texto, 100, stdin);

    sscanf(texto, "%s - %d - %lf", nome, &idade, &altura);
    //Nome - Idade - Altura
    printf("Nome: %s\nIdade: %i\nAltura: %.2lf", nome, idade, altura);
    

    //ignorando variáveis
    sscanf(texto, "%*s - %d - %*lf",  &idade);
    printf("Idade: %i\n", idade); 

    //imprimindo no sprint
    char texto[100];
    char nome[50] = "Henrique";
    int idade = 37;
    double altura = 1.75;

    sprintf(texto, "%s - %i - %.2lf", nome, idade, altura);
    printf("%s\n", texto);

    return 0;
}