#include <stdio.h>

typedef struct smar
{
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;

} Smartphone;

void cadastraSmartphone(int qtd_cadastrada, Smartphone phones[]);
int pesquisaSmartphones(int qtd_cadastrada, Smartphone phones[], Smartphone reqMin);

int main(void)
{
    Smartphone phone[20];
    Smartphone min;
    char confirma;
    int contador = 0, encontrados;

    do
    {
        fflush(stdin);
        scanf(" %c", &confirma);

        if (confirma == 's')
        {
            cadastraSmartphone(contador, phone);
            contador++;
        }

    } while (confirma == 's');

    scanf(" %[^\n]s", &min.modelo);
    scanf("%d %f %f %f", &min.memoria, &min.processador, &min.camera, &min.bateria);

    encontrados = pesquisaSmartphones(contador, phone, min);

    printf("%d smartphones encontrados.", encontrados);
}

void cadastraSmartphone(int qtd_cadastrada, Smartphone phones[])
{
    scanf(" %[^\n]s", &phones[qtd_cadastrada].modelo);
    scanf("%d %f %f %f", &phones[qtd_cadastrada].memoria, &phones[qtd_cadastrada].processador, &phones[qtd_cadastrada].camera, &phones[qtd_cadastrada].bateria);
}

int pesquisaSmartphones(int qtd_cadastrada, Smartphone phones[], Smartphone reqMin)
{
    int contador = 0;
    for (int i = 0; i <= qtd_cadastrada; i++)
    {
        if (reqMin.memoria >= phones[i].memoria && reqMin.processador >= phones[i].processador && reqMin.camera >= phones[i].camera && reqMin.bateria >= phones[i].bateria)
        {

            printf("Modelo: %s", phones[i].modelo);
            printf("Memória: %dGB\n", phones[i].memoria);
            printf("Processador: %fGhz\n", phones[i].processador);
            printf("Camera: %fMpixels\n", phones[i].camera);
            printf("Bateria: %fmA\n", phones[i].bateria);
            printf("\n");
            contador++;
        }
    }
    // printf("%d", contador);
    return contador;
}