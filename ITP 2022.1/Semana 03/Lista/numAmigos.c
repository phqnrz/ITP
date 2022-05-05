#include <stdio.h>

int testaAmigo(int n1, int n2) {
    
    int soma1, soma2, divisor;
    soma1 = 1;
    for (divisor = 2; divisor <= n1 / 2; divisor++)
    {
        if (n1 % divisor == 0)
            soma1 += divisor;
    }

    soma2 = 1;
    if (soma1 != n1)
    {
        for (divisor = 2; divisor <= soma1 / 2; divisor++)
        {
            if (soma1 % divisor == 0)
                soma2 += divisor;
        }
    }

    if (soma2 == n1)
    {
        printf("O %d possui um amigo!\n", n1);
    }

    return(n1);
}


int main(void)
{
    int n1, n2, result;

    scanf("%d", &n1);
    if(n1 == 1){
        printf("Os intervalos nao apresentam amigos!");
    } else {
        scanf("%d", &n2);
    }

   result = testaAmigo(n1, n2);

    return 0;
}