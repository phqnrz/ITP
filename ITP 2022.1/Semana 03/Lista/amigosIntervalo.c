#include <stdio.h>

int testa_divisor(int numero, int divisor) {
    int soma1 = 1;

    for (divisor = 2; divisor <= numero / 2; divisor++) {
        if (numero % divisor == 0)
            soma1 += divisor; 
    }
    return (soma1);
}
/*
int soma_divisores(int value) {
    int soma = 1;
    
    for (int i = 1; i <= value / 2; i++) {
        soma += i; 
    }
    return (soma);
}
*/

int testa_amigos(int a, int b) {
    int true = 1, false = 0;

    if (a == soma_divisores && b == soma_divisores) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n1, n2;
    int result;

    scanf("%d", &n1);
    scanf("%d", &n2);

    for (n1; n1 <= n2; n1++){
        result = testa_amigos(n1, n2);
    }
    printf("O %d possui um amigo.", result);
    
    return 0;
}