#include <stdio.h>

int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}

int qnt_fibo(int num1, int num2)
{
    int qnt_fibos = 0, num_fibo, i;
    int fibos[500];
    for (i = 0; i < 15; i++)
    {
        fibos[i] = fibbonacci(i);
        if (num_fibo > num1 && num_fibo < num2)
            qnt_fibos++;
    }
    for (int j = 0; j < i; j++)
    {
        if (fibos[j] > num1 && fibos[j] < num2)
            qnt_fibos++;
    }

    return qnt_fibos;
}

int main(void)
{
    int n1, n2, qtd;
    scanf("%d %d", &n1, &n2);
    qtd = qnt_fibo(n1, n2);
    printf("Existem %d números de fibonacci entre %d e %d", qtd, n1, n2);

    return 0;
}