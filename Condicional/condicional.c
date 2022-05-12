# include <stdio.h>

//**Questão 03:** Escreva um programa em que o usuário informe a temperatura 
//(em números reais) e a escala utilizada (Celsius, Farenheit ou Kelvin). 
//A saída do programa será a temperatura nas 3 escalas.

// K = C + 273,15
//F = C * 1.8 + 32

int main(){
    int c, faren, kelvin;
    scanf("%d", &c);

    faren = (c * 1.8) + 32;
    kelvin = (c + 273.15);

    printf("C = Temperatura em Celsius: %.2d C\n", c);
    printf("F = Temperatura em Farenheit: %.2d F\n", faren);
    printf("K = Temperatura em Kelvin: %.2d K\n", kelvin);
    
    return 0;
}