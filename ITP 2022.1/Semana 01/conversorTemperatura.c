#include <stdio.h>


// K = C + 273.15
//F = (C * 1.8) + 32

int main (void) {
//declarando variáveis
    float tempEntrada, tempSaida;
    char escalaEntrada, escalaSaida, delimitador;

//entrada dos dados
    //printf("Informe a temperatura p/ converter (ex. 40.0 C > F): \n");
    scanf("%f %c %c %c", &tempEntrada, &escalaEntrada, &delimitador, &escalaSaida);

    if (escalaEntrada == 'C' && escalaSaida == 'K') {
        tempSaida = tempEntrada + 273.15;
    } 
    if (escalaEntrada == 'C' && escalaSaida == 'F') {
       tempSaida = (tempEntrada * 1.8) + 32;
    }
    if (escalaEntrada == 'K' && escalaSaida == 'C') {
        tempSaida = tempEntrada - 273.15;
    }
    if (escalaEntrada == 'K' && escalaSaida == 'F') {
        tempSaida = (tempEntrada - 273) * 1.8 + 32;
    }
    if (escalaEntrada == 'F' && escalaSaida == 'C') {
        tempSaida = (tempEntrada - 32) / 1.8;
    } 
    if (escalaEntrada == 'F' && escalaSaida == 'K') {
        tempSaida = (tempEntrada - 32) * 5/9 + 273;
    }

    printf("%.2f %c", tempSaida, escalaSaida);

    return 0;
}

//OK