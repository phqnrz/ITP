#include <stdio.h>

int main(void) {
//declaração das váriáveis 
  int num = 1, linhas;
  int i, j;

//entrada dos dados
  scanf("%d", &linhas);
  
  if (linhas < 1) {
    printf("Você entrou com %d, tente de novo na próxima\n", linhas);
    return -1;
  }
  for (int i = 1; i <= linhas; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%2d ", num++);   
    }
    printf("\n"); 
  }
  return 0;
}


// https://www.youtube.com/watch?v=s59qknxQWr0&ab_channel=Programa%C3%A7%C3%A3oDescomplicadaLinguagemC