#include <stdio.h>

int main(void)
{

    int vetorA[3], vetorB[3], vetorC[3], vetorD[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vetorB[i]);
    }
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vetorC[i]);
    }
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vetorD[i]);
    }

    printf("A = [");
    for (i = 0; i < 3; i++) {
        vetorA[i] = (vetorB[i] + vetorC[i] - (vetorD[i] * 5));
        printf("%d", vetorA[i]);

        if (i == 2) {
            break;
        }
        else {
            printf(",");
        }
    }
    printf("]");
    return 0;
}