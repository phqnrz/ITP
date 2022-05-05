#include <stdio.h>

int main()
{
    // declarando variáveis
    char prof;
    int cod, quant, prod;

    do
    {
        printf("\nDigite a letra inicial do seu nome, o codigo do item e a quantidade (ex. A 1 2): \n");
        scanf("%c %d %d", &prof, &cod, &quant);

        if (cod == 1)
        {
            prod = 3.5 * quant;
        }
        if (cod == 2)
        {
            prod = 1.5 * quant;
        }
        if (cod == 3)
        {
            prod = 6 * quant;
        }
        if (cod == 4)
        {
            prod = 10 * quant;
        }

        switch (prof)
        {
        case 'A':
        case 'a':
            printf("Andre deve R$ %d", prod);
            break;

        case 'K':
        case 'k':
            printf("Kayo deve R$ %d\n", prod);
            break;

        case 'I':
        case 'i':
            printf("Isaac deve R$ %d\n", prod);
            break;

        case 'D':
        case 'd':
            printf("Daniel deve R$ %d\n", prod);
            break;

        case 'G':
        case 'g':
            printf("Girao deve R$ %d\n", prod);
            break;

        default:
            printf("Nome invalido. Tente novamente.");
            break;
        }

    } while ((prof != 'F') && (cod != 0) && (quant != 0));

    return 0;
}

// André (A), Kayo (K), Isaac (I), Daniel (D) e Girão (G