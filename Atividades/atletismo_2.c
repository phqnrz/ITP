# include <stdio.h>

int main(void) {

    int qntd, somaQntd;
    float valor, somaTotal, somaValor, itemValor;
    somaQntd = somaTotal = qntd = itemValor = 0; 
   
     while (qntd != -1) {           
        
        scanf("%d", &qntd); 
            if (qntd == -1) {
                printf( "%d %.2f", somaQntd, somaValor); 
            } else {
                scanf("%f", &valor);

                somaQntd = somaQntd + qntd;  
                itemValor = valor * qntd; 
            }
        somaValor = somaValor + itemValor;
    } 

    return 0;
}


int numero, outroNumero;
char operacao;

printf("%d %d %c", numero, outroNumero, operacao);