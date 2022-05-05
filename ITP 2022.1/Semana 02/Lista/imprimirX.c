#include <stdio.h>

int main(void) {
//declaração das variáveis
  int num, i, j;
  char letra;

//entrada dos dados
  do {
    scanf("%d %c", &num, &letra);
    
  } while (num < 4);
  for (i = 1; i < num; i++) {
    for (j = 1; j < num; j++) {
      if ((j == i) || (j == num-i)) 
        printf("%c", letra);
      else
        printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}