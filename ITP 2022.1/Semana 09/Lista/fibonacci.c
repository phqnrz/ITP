#include <stdio.h>

int calc_fibonacci(int n) {   //fibbonacci
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (calc_fibonacci(n - 1) + calc_fibonacci(n - 2));
    }
}

int qntdNum_fibonacci(int num1, int num2) {  //qnt_fibo
    int qntd_fibonacci = 0;
    int num_fibonacci, i, j;
    int fibo[500];

    for (i = 0; i < 15; i++)
    {
        fibo[i] = calc_fibonacci(i);
        if (num_fibonacci > num1 && num_fibonacci < num2)
            qntd_fibonacci++;
    }
    for (j = 0; j < i; j++)
    {
        if (fibo[j] > num1 && fibo[j] < num2)
            qntd_fibonacci++;
    }

    return qntd_fibonacci;
}

int main(void)
{
    int n1, n2, qntd;
    scanf("%d %d", &n1, &n2);
    qntd = qntdNum_fibonacci(n1, n2);
    printf("Existem %d números de fibonacci entre %d e %d", qntd, n1, n2);

    return 0;
}