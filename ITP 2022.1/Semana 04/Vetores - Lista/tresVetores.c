#include <stdio.h>

int main(void) {
  int A[20];
  int i;
    
  for(i = 0; i < 20; i++){
    scanf("%d", &A[i]);
  }

  printf("\na)");
  for(i = 0; i < 20; i++) {
    if(A[i] % 3 == 0) {
      printf("%d", A[i]);
      if(i != (20 -1)){
        printf(",");
      }
    }
  }
  printf("\nb)");
  for(i = 0; i < 20; i++) {
    if(A[i] % 4 == 0) {
      printf("%d", A[i]);
      if(i != (20 -1)){
        printf(",");
      }
    }
  }

  printf("\nc)");
  for(i = 0; i < 20; i++) {
    if((A[i] % 3 != 0) && (A[i] % 4 != 0)) {
      printf("%d", A[i]);
      if(i != (20 - 1)){
        printf(",");
      }
    }
  }
  return 0;
}
