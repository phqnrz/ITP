#include <stdio.h>

int main (void) {

    int vetor[100];
    int i;

    for (i = 0; i < 100; i++) {
        vetor[i] = 1;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}