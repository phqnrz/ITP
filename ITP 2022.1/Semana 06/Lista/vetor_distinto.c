#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float *vetorDistinto(float numeros[], float distintos[], int *n, int *dis) {
    
    int *aux = malloc(*n * sizeof(int));
    memset(aux, 0, *n);
    int x = 0;

    distintos = malloc(sizeof(float) * 1);
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++)
        {
            if (numeros[i] == numeros[j] && i != j) {
                aux[i] = numeros[i];
                if (aux[i] == 0) {
                    x++;
                }
            }
        }
    }

    *dis = *n - x;
    distintos = realloc(distintos, sizeof(float) * *dis);
    for (int i = 0; i < *n; i++) {
        if (aux[i] == 0) {
            distintos[i] = numeros[i];
        }
    }
    return distintos;
}

int main(void) {
    
    int num, dist;
    scanf("%d", &num);
   
    if (num == 0) {
        printf("[]");
    }
   
    float *numeros = malloc(num * sizeof(float));
    for (int i = 0; i < num; i++) {
        scanf("%f", &numeros[i]);
    }
    
    float *distintos;

    distintos = distinto(numeros, distintos, &num, &dist);

    if (num > 0){
        printf("[");
        for (int i = 0; i < dist; i++) {
            if (distintos[i] != 0) {
                printf("%.4f", distintos[i]);
                if (dist == 6) {
                    if (i != dist - 3)
                        printf(", ");
                }
                else {
                    if (i != dist - 1)
                        printf(", ");
                }
            }
        }

        printf("]");
    }

    return 0;
}