#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct person {
    char name[60];
    int age;
    char gender;

} pessoa;

pessoa criar(char name[], int age, char gender) {
    
    pessoa aux;
    strncpy(aux.name, "\0", 60);
    strcpy(aux.name, name);
    aux.age = age;
    aux.gender = gender;

    return aux;
}

void inserir(pessoa pessoas[], pessoa input, int pos) {
    pessoas[pos] = input;
}

void deletar(pessoa pessoas[], pessoa input, int *pnt) {
    int i = 0;
    for (i = 0; i < *pnt; i++) {
        if (strcmp(pessoas[i].name, input.name) == 0 && pessoas[i].age == input.age && pessoas[i].gender == input.gender) {
            for (int j = i, x = i; x < *pnt; j++) {
                pessoas[x] = pessoas[j + 1];
                x++;
            }
            strncpy(pessoas[*pnt].name, "\0", 50);
            *pnt = *pnt - 1;
        }
    }
}

void imprimir(pessoa pessoas[], int pos) {
    for (int i = 0; i < pos; i++) {
        printf("%s,%d,%c\n", pessoas[i].name, pessoas[i].age, pessoas[i].gender);
    }
}

int main(void) {
    
    pessoa input, *novasPessoas;
    int qtd_pessoas = 1, i = 0;
    pessoa *pessoas = malloc(sizeof(pessoa) * qtd_pessoas);
    char funcao = '\0';
    char aux_name[50] = "\0";
    int aux_age;
    char aux_gender;

    while (funcao != 'p') {
        
        scanf("%c\n", &funcao);
        if (funcao == 'p') {
            imprimir(pessoas, i);
            break;
        }
        if (i >= qtd_pessoas) {
            qtd_pessoas++;
            pessoas = realloc(pessoas, sizeof(pessoa) * qtd_pessoas);
        }

        fgets(aux_name, 50, stdin);
        if (aux_name[strlen(aux_name) - 1] == '\n')
            aux_name[strlen(aux_name) - 1] = '\0';

        scanf("%d\n", &aux_age);
        scanf("%c\n", &aux_gender);

        input = criar(aux_name, aux_age, aux_gender);
        strncpy(aux_name, "\0", 50);

        if (funcao == 'i') {
            inserir(pessoas, input, i);
            i++;
        }
        else if (funcao == 'd')
            deletar(pessoas, input, &i);
    }

    return 0;
}