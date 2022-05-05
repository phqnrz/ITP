#include <stdio.h>
#include <math.h>

int main (void) {

    int a, b, c, d;
    printf("Insira um numero de quatro digitos: ");
    scanf("%i",&a);
    b=a%10;
    c=a%100;
    d=a%1000;
    printf("%i\n%i\n%i\n%i",a,d,c,b);
    return 0;

    return 0;
}

// https://pt.stackoverflow.com/questions/327499/qual-o-c%C3%B3digo-pra-imprimir-apenas-o-primeiro-numero-de-um-valor-ex-s%C3%B3-o-8-do-8
//https://www.clubedohardware.com.br/forums/topic/822903-como-verificar-%C3%BAltimo-digito-de-um-n%C3%BAmero/