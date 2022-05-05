#include <stdio.h>

void imprime(char letra, int qtd)
{
    int i;

    for (i = 0; i < qtd; i++)
        printf("%c", letra);
}

int main() {
    
    int valor = 10;
    char let = "z";

    //imprime('a', 5);
    imprime(let, valor);
}
