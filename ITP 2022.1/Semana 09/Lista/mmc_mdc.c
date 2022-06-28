#include <stdio.h>

int mdc2(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return mdc2(b, (a % b));
}

void calc_mdc_mmc(int x, int y, int *mdc, int *mmc)
{
    *mdc = mdc2(x, y);
    *mmc = (x * y) / (*mdc);
}

int main(void)
{
    int num1, num2, mdc, mmc;

    scanf("%d\n%d", &num1, &num2);
    calc_mdc_mmc(num1, num2, &mdc, &mmc);
    printf("MDC = %d, MMC = %d", mdc, mmc);

    return 0;
}