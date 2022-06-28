#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct table{
  char name[50];
  int gf,gs;
  
}times;

void ordenar(times *clube,int *pos){
  times aux;

  for(int i=0;i<*pos-1;i++){
    for(int j=i+1;j<*pos;j++){
      if(clube[i].gf<clube[j].gf){
        aux = clube[i];
        clube[i]=clube[j];
        clube[j]=aux;
      }
        
    }
    
  }
    
}



int main(void) {
  times *clube;
  int num;
  char buffer[50];

  scanf("%d", &num);
  
  
  
  clube=malloc(sizeof(times)*num);
  for(int i=0;i<num;i++){
    fgetc(stdin);
    fgets(clube[i].name,50,stdin);
    clube[i].name[strlen(clube[i].name)-1]= 0;
    scanf("%d\n", &clube[i].gf);
    scanf("%d", &clube[i].gs);
  }
  ordenar(clube,&num);
  
  for(int i=0;i<num;i++){
    printf("%d - %s\n", i+1,clube[i].name);
    printf("Gols marcados: %d\n", clube[i].gf);
    printf("Gols sofridos: %d\n", clube[i].gs);
  }
  
  return 0;
}