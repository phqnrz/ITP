#include <stdio.h>
#include <math.h>

int main()
{
    // declarando variáveis

    int num, soma;
    double produto;
    float mediaArit, mediaHarm, mediaGeom, erroMedio, somaGeo;

    soma, num = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num);
        soma += num;
        produto = (produto * num);
        mediaArit = (float)(soma * 0.1);

        // mediaGeom =

        // mediaHarm =
    }
    printf("\nSoma dos numeros: %d", soma);
    printf("\nMédia artimética: %.2f", mediaArit);
    printf("\nMédia harmônica: %.2lf", produto);

    return 0;
}