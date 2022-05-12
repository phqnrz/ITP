# include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
//setlocale(LC_ALL, "Portuguese_Brazil");
//declarando variaveis
int soma = 0, novaSoma = 0;
int jogador1, jogador2, jogador3, jogador4;
char alfabeto [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

//recebendo valores do usuário
    scanf("%d %d %d %d", &jogador1, &jogador2, &jogador3, &jogador4);

//soma dos valores recebidos
soma = jogador1 + jogador2 + jogador3 + jogador4;
//realizando o laço
    if (soma == 0) {
        printf("Ei! Ninguém colocou nada!");
    }
    else if (soma >= 27) {
        printf("Tente novamente!");
    }
    else if (novaSoma <= 26) {
        novaSoma = soma - 1;
        printf("Letra: %c", alfabeto[novaSoma]);
    }
    else { 
        novaSoma = soma - 27;
        printf("Letra: %c", alfabeto[novaSoma]);    
    }
    system("pause");
    return 0;
}