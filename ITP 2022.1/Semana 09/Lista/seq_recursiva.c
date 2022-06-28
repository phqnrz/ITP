#include <stdio.h>

int seq(int n)
{
    if (n == 1)
    {
        printf("1");
        return 1;
    }
    else if (n % 2 == 0)
    {
        printf("%d ", n);
        return seq(n / 2);
    }
    if (n % 2 != 0)
    {
        printf("%d ", n);
        return seq(n * 3 + 1);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    seq(n);

    return 0;
}