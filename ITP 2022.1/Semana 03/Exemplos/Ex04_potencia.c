#include <stdio.h>

//int potencia(int x, int y);

int main(void) {
    int num1, num2;
    int resultado;

    scanf("%d %d", &num1, &num2);

    // Poderiamos usar para atribuir o valor em uma variável
    resultado = potencia(num1, num2);

    // Poderiamos usar em uma expressão aritmética
    resultado = 100 + potencia(num1, num2);
    //printf("Resultado:%d\n", resultado);

    // Poderiamos usar em uma expressão relacional
    if (potencia(num1, num2) > 100)
        printf("Que potencia!\n");

    // Poderiamos usar como argumento no printf!
    printf("O valor da potencia foi: %d", potencia(num1, num2));
}

int potencia(int x, int y) {
    int i;
    int pot = 1;

    for (i = 0; i < y; i++)
        pot *= x;

    return pot;
}