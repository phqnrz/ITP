#include <stdio.h>

//função para converter as bases
int conversor(int n, int b) {
    int temp, resultado, mul;

    resultado = 0;
    temp = n;
    mul = 1;
    while (temp > 0) {
        resultado = (resultado + (temp % b) * mul);
        mul = mul * 10;
        temp = temp / b;
    }
    return(resultado);
}

//função principal
int main(void) {

//declarando variáveis
    int value, base, result;
    
    do {
    
        scanf("%d", &value);
        if(value == -1) {
            printf("Programa Encerrado!");
            break;
        } else {
            scanf("%d", &base);

            switch (base) {
                case 2:
                    result = conversor(value, base);
                    break;

                case 3:
                    result = conversor(value, base);
                    break;

                case 4:
                    result = conversor(value, base);
                    break;

                case 5:
                    result = conversor(value, base);
                    break; 

                case 6:
                    result = conversor(value, base);
                    break;

                case 7:
                    result = conversor(value, base);
                    break;

                case 8:
                    result = conversor(value, base);
                    break;
            }
        }
        printf("Numero %d(10) na base %d = %d(%d)\n", value, base, result, base);
    } while (value != -1);

    return 0;
}