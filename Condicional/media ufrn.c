# include <stdio.h> 

int main (void) {

    float nota1, nota2, nota3, media, nota4;

    printf("Digite as tres notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = ((nota1 + nota2 + nota3) / 3);
    if (media >= 7) {
        printf("Voce esta aprovado.");
    } else if (media < 3) {
        printf("Voce esta reprovado.");
    } else if (media >= 5 && nota1 >= 3 && nota2 >= 3 &&  nota3  >= 3) { 
        printf("Escapou fedendo mas passou!");
    } else {
        printf("Digite a quarta nota: \n");
                scanf("%f", &nota4);

        if (nota4 > nota1 && nota1 <= nota2 && nota1 <= nota3) {
            media = (nota4 + nota2 + nota3) / 3; 
        } else if (nota4 > nota2 && nota2 <= nota1 && nota2 <= nota3) { 
            media = (nota4 + nota1 + nota3) / 3;
        } else if (nota4 > nota3 && nota3 <= nota1 && nota3 <= nota2) { 
             media = (nota4 + nota1 + nota2) / 3;
        }
        if (media >= 7) printf("Aprovado \n");
        else if (media >= 5 && nota4 > 3) printf ("Aprovado na reposicao\n");
        else printf("Reprovado\n");

    }

    return 0;
}