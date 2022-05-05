#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese"); // Leitura do idioma
                                     // declarando variáveis
    int num;

    // entrada de dados
    // printf("Informe um número entre 0 e 255:\n");
    scanf("%d", &num);
    if (num < 0 || num > 255)
    {
        printf("Número %d não suportado!!\n", num);
        return 0;
    }

    printf("%d", (num >> 7) & 0b0000001);
    printf("%d", (num >> 6) & 0b1);
    printf("%d", (num >> 5) & 0b1);
    printf("%d", (num >> 4) & 0b1);
    printf("%d", (num >> 3) & 0b1);
    printf("%d", (num >> 2) & 0b1);
    printf("%d", (num >> 1) & 0b1);
    printf("%d\n", (num & 0b1));

    return 0;
}