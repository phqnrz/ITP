# include <stdio.h> 

int main (void) {

    int ano, i;
    float distancia, somaDistancia, media;
    somaDistancia = 0;

    scanf("%d", &ano);

    for (i = 1; i < ano; i++){
        scanf("%.2f\n", &distancia);
        somaDistancia = somaDistancia + distancia;
        


    }
    
    media = somaDistancia / ano;
    printf("%.2f\n", media);




    return 0;
}


//for (i = 0; i < 10; i++){