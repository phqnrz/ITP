#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese"); // Leitura do idioma
//declarando as variaveis
    double nota1, nota2, nota3;
    int peso1, peso2, peso3;
    double media, unid1, unid2, unid3, rec;

//entrada dos dados
    //scanf("%lf %d %lf %d %lf %d", &nota1, &peso1, &nota2, &peso2, &nota3, &peso3);
    
    scanf("%lf, %d", &nota1, &peso1);
    scanf("%lf, %d", &nota2, &peso2);
    scanf("%lf, %d", &nota3, &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    
    rec = media - 10;
    
    if (media < 3) {
        printf("O aluno foi REPROVADO com a média %.lf", media);
    } else if (media >= 3 && media < 7){
        printf("O aluno ficou em RECUPERAÇÃO com média %.2lf precisando de %.2lf", media, rec);
    } else if (media >= 7) {
        printf("O aluno foi APROVADO com média %.2lf", media);
    }

    return 0;
}