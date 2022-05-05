#include <stdio.h>
#include <string.h>

int main(void) {
// declaração das variáveis
  char num[30];
  int tam, pal = 1, impar;

//entrada de dados
  scanf ("%s", num);
  tam = strlen(num);

  for (int i = 0; i < tam/2; i++) {
    if (num[i] != num[tam-i-1])
      pal = 0;
  }
  if (num[tam-1] == '0' || num[tam-1] == '2' || 
      num[tam-1] == '4' || num[tam-1] == '6' || 
      num[tam-1] == '8')
    impar = 0;
  else
    impar = 1;
    
  if (pal)
    printf("%s é palíndromo e %s\n", num, (impar ? "impar" : "par"));
  else
    printf("%s não é palíndromo e %s\n", num, (impar ? "impar" : "par"));
  return 0;
}

//https://www.ime.usp.br/~macmulti/exercicios/inteiros/23C.html
//https://fabiompl.wordpress.com/2015/04/19/linguagem-c-exercicio-01-palindromo-numeros/