#include <stdio.h>
#include <string.h>


void read_line(char linha[], int tam, FILE* f){
    fgets(linha, tam, f);
    while(linha[0] == '\n')
        fgets(linha, tam, f);
    if(linha[strlen(linha)-1] == '\n')
        linha[strlen(linha)-1]='\0';
}


int main(void) {
  int n;
  char string[200]={0};
  scanf("%d", &n);
  char texto[n][200];
  int tam[n],tam_min=0, tam_prox_med[n], tam_max=0;
  float tam_med=0, tam_tot=0;

  for(int i=0;i<n;i++){
    read_line(string, 200, stdin);
    strcpy(texto[i],string);
  }
  

  for(int i=0;i<n;i++){
    tam[i] = 0;
    tam_max=tam[0];
    tam_min=tam[0];
    
    for(int j=0;texto[i][j]!='\0';j++){
      tam[i] += 1;
      tam_tot+=1;
    }
    
    
  }

  tam_med =tam_tot/n;
  tam_prox_med[0]= tam[0]-tam_med;
  int aux = tam_prox_med[0];
  char min_texto[200]={0};
  int min=tam[0];
  strcpy(min_texto,texto[0]);
  
  for(int i=0;i<n;i++){
    tam_prox_med[i]= tam[i]-tam_med;
    if(tam_prox_med[i]<0)
    {
        tam_prox_med[i] = tam_prox_med[i] * (- 1);
    }

    
    if(aux>tam_prox_med[i]){
      aux = tam_prox_med[i];
      strcpy(min_texto,texto[i]);
      min=tam[i];
    }
    
  }
  

  for(int i=1;i<n;i++){
    

  if(tam[i]>tam[i-1]&&tam[i]>tam[0]){
      tam_max =tam[i];
    }


  if(tam[i]<tam[i-1]){
      tam_min =tam[i];
    }
    
  }
  
  
  printf("Tamanho máximo: %d\n", tam_max);
  printf("Tamanho mínimo: %d\n", tam_min);
  printf("Tamanho médio: %.2f\n", tam_med);
  printf("Tamanho mais próximo da média %d\n",min);
  printf("Textos\n");
  printf("%s", min_texto);
  return 0;
}