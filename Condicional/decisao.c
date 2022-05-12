# include <stdio.h> 

int main (void) {

    int cor; //0 = vermelho, 1 = amarelho, 2 = verde
    scanf("%d", &cor);

    if (cor == 0){
        printf("Vermelha: pare o carro e espere o sinal abrir");
    } else if (cor == 1) {
        printf("Amarela: tenha atencao! Se estiver longe pare, se estiver perto, senta o pe!");

    } else if (cor == 2) {
         printf("Verde: pode passar, caminho livre para voce!");
    } else {
        printf("Digite novamente,");
    }

    return 0;
}