#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void dates(char **datas, char **str, int linhas, int * false) {
    char *pos = NULL, *pos2 = NULL;

    for (int i = 0; i < linhas; i++) {
        pos = strchr(str[i], '/');
        pos2 = strchr(str[i], '-');

        if (pos != NULL) {
            datas[i] = malloc(sizeof(char) * 12);
            strcpy(datas[i], str[i]);
            strcpy(str[i], "\0");
        }
        else if (pos2 != NULL) {
            datas[i] = malloc(sizeof(char) * 12);
            str[i][2] = '/';
            str[i][5] = '/';
            strcpy(datas[i], str[i]);
            strcpy(str[i], "\0");
        }
    }
}

int main(void) {
    int tam = 50;
    int qnt = 9;
    int len;
    char buffer[tam];
    char **str = malloc(qnt * sizeof(char *));

    int l = 0;
    int fim = 0, j = 0;
    int falso[10] = {0};

    while (fim == 0) {
        fgets(buffer, 50, stdin);

        if (l == qnt) {
            qnt *= 2;
            str = realloc(str, qnt * sizeof(char *));
        }

        len = strlen(buffer);
        if (buffer[j] == 'F' && len == 3) {
            fim = 1;
        }
        else {
            str[l] = malloc(sizeof(char) * len);
            strcpy(str[l], buffer);
            l++;
        }
    }
    char **datas = malloc(l * sizeof(char *));

    dates(datas, str, l, falso);

    for (int i = 0; i < l; i++) {
        if (datas[i] != NULL)
            printf("%s", datas[i]);

        else if (str[i] != NULL)
            printf("INVALIDO!\n");
    }

    free(datas);
    free(str);

    return 0;
}