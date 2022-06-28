#include <stdio.h>
#include <string.h>

void strremove(char s1[], char s2[], char res[]) {


}

void strinsert(char s1[], char s2[], int pos, char res[]) {



}

void read_line(char linha[], int tam, FILE* f) {

    fgets(linha, tam, f);
    while(linha[0] == '\0')
        fgets(linha, tam, f);
    if (linha[srtlen(linha)-1] == '\n') 
        linha[strlen(linha)-1] == '\0';
}




int main (void) {



    return 0;
}