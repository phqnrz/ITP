#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct churrasco {
    char nome[25];
    int preco;
    int qtd;
} churras;

int main(void) {
    
    churras *itens;
    int i = 1;
    int stop = 1;
    int qtd_pessoas;
    float total = 0;
    float div;

    while (stop == 1) {
        itens = malloc(sizeof(churras) * i);
        fgets(itens[i - 1].nome, 20, stdin);
        scanf("%d", &itens[i - 1].preco);
        scanf("%d", &itens[i - 1].qtd);
        scanf("%d", &stop);
        total += itens[i - 1].preco * itens[i - 1].qtd;
        i++;
    }

    scanf("%d", &qtd_pessoas);

    div = total / qtd_pessoas;

    printf("Valor: R$ %.2f\n", total);
    printf("Divisão R$ %.2f para cada participante.\n", div);

    return 0;
}