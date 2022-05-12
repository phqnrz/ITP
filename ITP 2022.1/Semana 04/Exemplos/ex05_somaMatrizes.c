#include <stdio.h>
#define TAM1 3
#define TAM2 2

int main (void){ 
    int matriz1[TAM1][TAM1], matriz2[TAM1][TAM1], matriz3[TAM1][TAM2];
    int resultaSoma[TAM1][TAM1], resultaMulti[TAM1][TAM2];
    int i, j, k;

    //leitura das matrizes
    for(i = 0; i < TAM1; i++) {
        for(j = 0; j < TAM1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < TAM1; i++) {
        for (j = 0; j < TAM1; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < TAM1; i++) {
        for (j = 0; j < TAM2; j++) {
            scanf("%d", &matriz3[i][j]);
        }
    }


    //soma da matriz1 com matriz2
    for (i = 0; i < TAM1; i++){
        for (j = 0; j < TAM1; j++){
            resultaSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\n\nSoma das matrizes 1 e 2: \n");
    
    for (i = 0; i < TAM1; i++){
        for (j = 0; j < TAM1; j++){
            printf("%d ", resultaSoma[i][j]);
        }
        printf("\n");
    }

    //multiplicação da matriz 2 com 3
    for(i = 0; i < TAM1; i++) {
        for(j = 0; j < TAM2; j++) {
            resultaMulti[i][j] = 0;
            for(k = 0; k < TAM1; k++) {
                resultaMulti[i][j] += matriz2[i][k] * matriz3[k][j];
            }
        }
    }

    printf("\n\nMultiplicacao das matrizes 2 e 3: \n");

    for (i = 0; i < TAM1; i++){
        for (j = 0; j < TAM2; j++){
            printf("%d ", resultaMulti[i][j]);
        }
        printf("\n");
    }

    return 0;
}