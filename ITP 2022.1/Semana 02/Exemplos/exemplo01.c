#include <stdio.h>

/* 
    Exemplo 1. Faça um programa que leia vários números e imprima o somatório deles. 
    Seu programa deve encerrar quando ler um número não positivo.
*/

int main (void) {
//declaração das variáveis
    int num, soma = 0;

    while(num > 0) {

        scanf("%d", &num);
        soma += num;
    }
    
    printf("%d", soma);

    return 0;
}