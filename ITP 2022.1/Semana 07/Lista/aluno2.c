#include <stdio.h>
#include <string.h>

typedef struct estudante
{
    int matricula;
    char nome[20];
    int codigo_disciplina;
    double notaUm, notaDois, media;

} Aluno;

int main(void)
{

    int qtdAlunos;
    scanf("%d", &qtdAlunos);
    Aluno alunos[qtdAlunos];

    for (int i = 0; i < qtdAlunos; i++) {

        scanf("%d %s %d %lf %lf", &alunos[i].matricula, alunos[i].nome, &alunos[i].codigo_disciplina, &alunos[i].notaUm, &alunos[i].notaDois);
    }

    for (int i = 0; i < qtdAlunos; i++) {

        alunos[i].media = (alunos[i].notaUm + alunos[i].notaDois * 2) / 3;
    }
    printf("%s, média final = %lf\n", alunos[0].nome, alunos[0].media);

    return 0;
}