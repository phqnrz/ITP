#include <stdio.h>

int main (void) {
    int i = 2;
    int j = i * i;
    int *k = &i;
    int m = *k * *k;

    *k = j * *k * m;
    printf("%i %i %i %i", i, j, *k, m);

    return 0;
}

/*
i = 2
j = 2 * 2 = 4
*k -> i;
m = 2 * 2 = 4

*k -> i =  4 * 2 * 4 = 32;

printf("%i %i %i %i", i, j, *k, m);


*/