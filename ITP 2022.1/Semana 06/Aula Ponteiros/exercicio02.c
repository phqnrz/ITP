#include <stdio.h>

int main (void) {
    
    int x = 5;
    int *y = &x;
    int z = *y;
    printf("%i %i %i\n", x, *y, z);

    x = 7;
    printf("%i %i %i\n", x, *y, z);

    x = 2;
    printf("%i %i %i\n", x, *y, z);

    return 0;
}