#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    char elemEntrada, elemSaida, operadorLogico;
    //printf("Digite dois valores e um operador logico (ex. A & B):\n");
    scanf("%c %c %c", &elemEntrada, &operadorLogico, &elemSaida);

    if (operadorLogico == '&') {
        printf("-------\n");
        printf("|%c|%c|r|\n", elemEntrada, elemSaida);
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|0|\n");
        printf("+-+-+-+\n");
        printf("|1|0|0|\n");
        printf("+-+-+-+\n");
        printf("|1|1|1|\n");
        printf("-------");
    } else if (operadorLogico == '|') {
        printf("-------\n");
        printf("|%c|%c|r|\n", elemEntrada, elemSaida);
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|1|\n");
        printf("+-+-+-+\n");
        printf("|1|0|1|\n");
        printf("+-+-+-+\n");
        printf("|1|1|1|\n");
        printf("-------");
    } else if (operadorLogico == '^') {
        printf("-------\n");
        printf("|%c|%c|r|\n", elemEntrada, elemSaida);
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|1|\n");
        printf("+-+-+-+\n");
        printf("|1|0|1|\n");
        printf("+-+-+-+\n");
        printf("|1|1|0|\n");
        printf("-------");
    }

    return 0;
}

// OK