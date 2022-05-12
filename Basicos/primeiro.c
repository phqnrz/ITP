//Primeiro código em C
#include <stdio.h>

//função padrão
int main() {
   int numero;
   scanf("%d", &numero);
//estrutura do printf, lembrando sempre da quantidade 
//dos place-holders e variaveis
   printf("Valor do numero: %d\n", numero);

   return 0;
}

/* 
Sempre lembrar de colocar ; no final de cada operação.
  
   #place-holders de C: 
	int: %i ou %d
	float %f
	double: %lf
	char: %c
obs: \n: quebra de linha
     \t: tabulação 

Ex:   scanf("%07.2lf", numero);
       %lf: place-holder padrão de float
       0: valor a ser completado
       7: valor ocupado pela variável
      .2: quantidade de casa após a vírgula
   
*/