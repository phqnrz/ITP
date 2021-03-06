# include <stdio.h>
/*
Faça uma calculadora simples que aceite as quatro operações: soma, subtração, multiplicação e divisão. 
O programa deve executar as contas até receber uma operação F, que indica o final do programa. 
Cada linha de entrada do programa é realizada no formato NUMERO OPERADOR NUMERO.

*/
int main (void) {
    int n1, n2;
    char op;

    do {
        printf("Digite a operacao desejada (Valor OP Valor): \n");
        scanf("%d %c %d", &n1, &op, &n2);

        switch (op) {
            case '+': printf("%d\n", n1 + n2);
            break;
            case '-': printf("%d\n", n1 - n2);
            break;
            case '*': printf("%d\n", n1 * n2);
            break;
            case '/':
                if (n2 == 0) printf("Erro! Divisao por zero!\n");
                else printf("%d\n", n1 / n2);
            break;
        }
    } while (op != 'F');
        printf("Programa encerrado!");

    return 0;

}