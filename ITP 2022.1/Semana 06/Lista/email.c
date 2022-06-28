#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void obter_indice(char **email, int linhas, char **str) {
    char *arroba = 0;
    char *ponto = 0;
    int posicao = 0, posicao1 = 0, posicao2 = 0;

    for (int i = 0; i < linhas; i++) {

        arroba = strchr(email[i], '@');
        if (arroba == NULL) {
            break;
        }
        posicao1 = arroba - email[i];
        ponto = strchr(email[i], '.');
        
        if (ponto == NULL){
            break;
        }
        while (arroba > ponto) {
            ponto++;
        }
        
        ponto = strchr(ponto, '.');
        posicao2 = ponto - email[i];
        posicao = posicao2 - posicao1;
        str[i] = malloc(sizeof(char) * posicao);
        strncpy(str[i], arroba + 1, posicao - 1);
    }
}

int main(void) {
    int tam = 50;
    int qnt = 2;
    int len;
    
    char *buffer = malloc(tam * sizeof(char));
    char **emails = malloc(qnt * sizeof(char *));
    
    memset(emails, 0, sizeof(buffer));
    
    int l = 0;
    int fim = 0;

    while (fim == 0) {
        fgets(buffer, 51, stdin);
        if (l == qnt) {
            qnt *= 2;
            emails = realloc(emails, qnt * sizeof(char *));
        }

        len = strlen(buffer) - 1;

        emails[l] = malloc(sizeof(char) * strlen(buffer));
        strcpy(emails[l], buffer);

        if (strcmp(buffer, "FIM\n") == 0) {
            fim = 1;
        }
        if (strcmp(buffer, "FIM\n") != 0){
            l++;
        }
    }
   
    char **str = malloc(l * sizeof(char *));
    memset(str, 0, l);

    obter_indice(emails, l, str);

    for (int i = 0; i < l; i++)
    {
        if (str[i] == 0)
        {
            i++;
        }
        printf("%s\n", str[i]);
    }

    free(emails);
    free(buffer);
    free(str);

    return 0;
}