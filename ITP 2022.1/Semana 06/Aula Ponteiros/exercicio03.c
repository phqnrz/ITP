#include <stdio.h>

int main(void)
{
    int i = 0, j = 1;
    int *p = &i;
    int *q = &j;

    printf("%i %i %p %p\n", i, j, &i, &j);
    printf("%p %p %p %p\n", p, q, &p, &q);
    printf("%i %i\n", *p, *q);

    printf("\n\n");
    *p = *q;
    printf("%i %i %p %p\n", i, j, &i, &j);
    printf("%p %p %p %p\n", p, q, &p, &q);
    printf("%i %i\n", *p, *q);

    return 0;
}

/*

*p -> i = 0;
*q -> j = 1;

1 printf: 0 1 ? ?;
2 printf: ? ? ? ?;
3 printf: 0 1;

*p -> i = *q => j :: i = 1;
1 printf: 1 1 ? ?;
2 printf: ? ? ? ?;
3 printf: 1 1;

*/