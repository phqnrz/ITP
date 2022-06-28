#include <stdio.h>

int main(void)
{
    int *ponteiro = NULL;
    int variavel = 2;

    ponteiro = &variavel;

    int conteudo = *ponteiro*4;
    int *ponteiro_2 = ponteiro;

    printf("Variavel tem o conteudo: %i\n", conteudo);
    printf("Endereco de variavel: %p\n", &variavel);
    printf("Conteudo de ponteiro: %p\n", ponteiro);

    //ver slide
    return 0;
}