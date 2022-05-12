#include <stdio.h>

/*Um determinado clube de futebol pretende classificar seus atletas em categorias e para isto ele contratou um programador
para criar um programa que executasse esta tarefa. Para isso o clube criou uma tabela que continha a faixa etária do atleta e sua categoria.
A tabela está demonstrada abaixo:

IDADE CATEGORIA
De 05 a 10 Infantil
De 11 a 15 Juvenil
De 16 a 20 Junior
De 21 a 25 Profissional

Construa um programa que solicite o nome e a idade de um atleta e imprima a sua categoria.
*/
int main()
{
    // declarando as variáveis
    char nome[30];
    int idade;

    printf("Informe o nome do atleta: ");
    scanf("%s", nome);
    printf("Informe a idade do alteta: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 10)
    {
        printf("%c é da categoria infantil.\n", nome);
    }
    else if (idade >= 11 && idade <= 15)
    {
        printf("%s é da categoria juvenil.\n", nome);
    }
    else if (idade >= 16 && idade <= 20)
    {
        printf("%s é da categoria júnior.\n", nome);
    }
    else if (idade >= 21 && idade <= 25)
    {
        printf("%s é da categoria profissional.\n", nome);
    }

    return 0;
}