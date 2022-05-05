#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese"); // Leitura do idioma
//declarando variaveis
    int a, b, c, d;
    int cont1, cont2, cont3, cont4, contTotal;

//entrada de dados
    scanf("%d %d %d %d", &a, &b, &c, &d);

    cont1 = (b > c) ? 1 : 0;
    cont2 = (d > a) ? 1 : 0;
    cont3 = ((c + d) > (a + b)) ? 1 : 0;
    cont4 = ((c > 0) && (d > 0)) ? 1 : 0;
    
    contTotal = cont1 + cont2 + cont3 + cont4;

//Você pode usar aquele teste na hora do printf: cont1 == 1 ? "" : "1"
    switch (contTotal) {
            case 0:
            printf("Valores Não Aceitos condições violadas: 1 2 3 4");
            break;

            case 1:
           		if (cont1 == 1) {
			    printf("Valores Não Aceitos condições violadas: 2 3 4");
                } else if (cont2 == 1) {
                    printf("Valores Não Aceitos condições violadas: 1 3 4");
                    } else if (cont3 == 1) {
                    printf("Valores Não Aceitos condições violadas: 1 2 4");
                    } else if (cont4 == 1) {
                    printf("Valores Não Aceitos condições violadas: 1 2 3");
                    }
			break;

            case 2:
            if (cont1 + cont2 == 2) {
			    printf("Valores Não Aceitos condições violadas: 3 4");
                } else if (cont1 + cont3 == 2) {
                    printf("Valores Não Aceitos condições violadas: 2 4");
                    } else if (cont1 + cont4 == 2) {
                    printf("Valores Não Aceitos condições violadas: 2 3");
                    }
            if (cont2 + cont3 == 2) {
			    printf("Valores Não Aceitos condições violadas: 1 4");
                } else if (cont2 + cont4 == 2) {
                    printf("Valores Não Aceitos condições violadas: 1 3");
                }
            if (cont3 + cont4 == 2) {
			    printf("Valores Não Aceitos condições violadas: 1 2");
                }
            break;

            case 3:
            if (cont1 + cont2 + cont3 == 3) {
			    printf("Valores Não Aceitos condições violadas: 4");
                } else if(cont2 + cont3 + cont4 == 3) {
			        printf("Valores Não Aceitos condições violadas: 1");
                    } else if (cont1 + cont3 + cont4 == 3) {
			        printf("Valores Não Aceitos condições violadas: 2");
                    } else if (cont1 + cont2 + cont4 == 3) {
			        printf("Valores Não Aceitos condições violadas: 3");
                    }
            break;

            case 4: 
                printf("Valores aceitos.");
            break;
            //default: printf("Heroi nao existe.\n");
    }
        
    return 0;
}
