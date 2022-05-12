#include <stdio.h>

//operador ternario
int main() {
  int petalas;

  scanf("%d", &petalas);

  //Mudando o if para o operador ternário
  petalas%2 == 0 ? printf("Mal me quer! Estalo!\n") : printf("Bem me quer! #xatiado\n");

  return 0;
}