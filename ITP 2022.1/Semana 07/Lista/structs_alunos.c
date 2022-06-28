#include <stdio.h>
#include <string.h>

typedef struct estudante
{

    int matricula;
    char nome[40];
    char disciplina[3];
    double nota1, nota2, media;

} aluno;

int main(void)
{

    aluno alunos[10];
    int qntd;

    scanf("%d", &qntd);

    while (getchar() != '\n')
        ;
    for (int i = 0; i < qntd; i++)
    {
        scanf("%d, %[^,], %[^,], %lf, %lf", &alunos[i].matricula, alunos[i].nome, alunos[i].disciplina, &alunos[i].nota1, &alunos[i].nota2);
    }

    for (int i = 0; i < qntd; i++)
    {

        alunos[i].nota2 = (alunos[i].nota2 * 2.0);
        alunos[i].media = ((alunos[i].nota1 + alunos[i].nota2) / 3);
    }
    // printf("%s\n", alunos[0].nome);
    printf("%s, média final = %0.1lf\n", alunos[0].nome, alunos[0].media);

    if (qntd == 2)
        printf("%s, média final = %0.1lf", alunos[1].nome, alunos[1].media);

    return 0;
}