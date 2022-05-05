#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
    Faça uma calculadora simples que aceite as quatro operações: soma, subtração, multiplicação e divisão. 
    O programa deve executar as contas até receber uma operação F, que indica o final do programa. 
    Cada linha de entrada do programa é realizada no formato NUMERO OPERADOR NUMERO.
    
    Ex:
    4 + 2
    5 - 3
    0 F 0

</aside>
*/


int main (void) {

    setlocale(LC_ALL, "Portuguese"); // Leitura do idioma
    
    int n1, n2;
    char operador;

    do {
        printf("Digite a operação desejada (ex. 20 * 2): \n", n1, operador, n2);
        scanf("%d %c %d", &n1, &operador, &n2);

        switch (operador) {
            case '+' : printf("%d \n", n1 + n2);
            break;

            case '-' : printf("%d \n", n1 - n2);
            break;

            case '*' : printf("%d \n", n1 * n2);
            break;

            case '/' :
                if (n2 == 0) {
                    printf("Erro! Divisão por zer0!\n");
                } else {
                    printf("%d \n", n1 / n2);
                }
            break;
        }
    } while (operador != 'F' && operador !='f');
        printf("Fim da operação.");

    return;
}