# include <stdio.h>

//Faça um programa que leia vários números e imprima o somatório deles. 
//Seu programa deve encerrar quando ler um número não positivo.

int main(void) {

    int n, soma;
    soma = 0;


    scanf("%d", &n);

    while (n > 0){
       soma = soma + n;
       scanf("%d", &n);
       
    }
        printf("%d", soma);
    return 0;
}