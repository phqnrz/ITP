#include <stdio.h>

int main(void)
{

    int diferentes = 0;
    int fotos, entrada, i;
    int tubaroes[15] = {0};

    scanf("%d", &fotos);
    printf("%d fotos.\n\n", fotos);

    for (i = 0; i < fotos; i++)
    {
        scanf("%d", &entrada);

        if (tubaroes[entrada] == 0)
        {
            tubaroes[entrada] = 1;
            diferentes++;
        }
    }

    printf("\n%d especies diferentes!\n", diferentes);

    for (i = 1; i < 15; i++)
    {
        if (tubaroes[i] != 0)
        {
            switch (i)
            {
            case 1:
                printf("Tubarao Branco\n");
                break;
            case 2:
                printf("Tubarao Martelo\n");
                break;
            case 3:
                printf("Tubarao Touro\n");
                break;
            case 4:
                printf("Tubarao Baleia\n");
                break;
            case 5:
                printf("Tubarao Lixa\n");
                break;
            case 6:
                printf("Tubarao Frade\n");
                break;
            case 7:
                printf("Tubarao Tigre\n");
                break;
            case 8:
                printf("Tubarao Cabeca Chata\n");
                break;
            case 9:
                printf("Tubarao Serra\n");
                break;
            case 10:
                printf("Tubarao de Pontas Negras\n");
                break;
            case 11:
                printf("Tubarao Raposa\n");
                break;
            case 12:
                printf("Tubarao Mako\n");
                break;
            case 13:
                printf("Tubarao Bruxa\n");
                break;
            case 14:
                printf("Tubarao Azul\n");
                break;
            }
        }
    }

    return 0;
}
