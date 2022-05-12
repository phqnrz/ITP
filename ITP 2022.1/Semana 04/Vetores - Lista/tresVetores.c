#include <stdio.h>

int main()
{

    int A[20];
    int vetorA[20], vetorB[20], vetorC[20];
    int i, tam = 20;

    for (i = 0; i < tam; i++){
        scanf("%d", &A[i]);
    }

    printf("a)");
    for (i = 0; i < tam; i++) {
        vetorA[i] = A[i];
        if (vetorA[i] % 3 == 0) {
            printf("%d", vetorA[i]);

            if (i != (tam - 1)) {   
                printf(",");
            }
        }
    }

    printf("\nb)");
    for (i = 0; i < tam; i++) {
        vetorB[i] = A[i];
        if (vetorB[i] % 4 == 0) {
            printf("%d", vetorB[i]); 

            if (i != (tam - 1)) {
                printf(",");
            }
        }
    }


    printf("\nc)");
    for (i = 0; i < 20; i++) {
        vetorC[i] = A[i];
        if ((vetorC[i] % 3 != 0) && (vetorC[i] % 4 != 0)) {
            printf("%d", vetorC[i]);

            if (i != (tam - 1)){
                printf(",");
            }
        }
    }

    return 0;
}
