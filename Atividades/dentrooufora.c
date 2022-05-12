# include <stdio.h>

int main() {
//declarando variaveis
int ponto1_1, ponto1_2, ponto2_1, ponto2_2;
int coord1, coord2;

//recebendo dados do usuário
    scanf("%d %d %d %d", &ponto1_1, &ponto1_2, &ponto2_1, &ponto2_2);
    scanf(" %d %d", &coord1, &coord2);

//realizando o laço
if ((coord1 >= ponto1_1 && coord1 <= ponto2_2) && (coord2 >= ponto1_1 && coord2 <= ponto2_2)) {
//if ((coord1 >= ponto1_1 && ponto1_2) && (coord1 <= ponto2_1 && ponto2_2)) {
    printf("Dentro!");
} else {
    printf("Fora!");
}

    return 0;
}