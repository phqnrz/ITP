#include <stdio.h>

#define TAM 100
#define MAX_TEXTO 101

/*Função que fará a leitura da primeira parte da entrada, correspondente a base inicial
  Parâmetros:
   - posicao representa a posicao no vetor de Strings que será inserido a próxima consulta
   - base representa o vetor de Strings
*/
void carrega_base(int posicao, char base[][MAX_TEXTO])
{
    int tamanho;

    // Utilizaremos a função fgets para ler uma linha inteira. Essa é a função mais recomendada!
    fgets(base[posicao], MAX_TEXTO, stdin);

    // Vamos limpar o \n capturado na entrada com o fgets.
    // Para isso vamos pegar o tamanho da string...
    tamanho = strlen(base[posicao]);

    // E trocar a última letra, o \n, por um \0
    base[posicao][tamanho - 1] = '\0';
}


// Funçãode impressão das sugestões
void imprime_sugestoes(char *str, int tamanho, char base[][MAX_TEXTO])
{
    /*
     Variáveis:
     - tam_sugestao armazenará o tamanho da string de teste
     - sugestoes será um contador que vai contar quantas sugestoes foram impressas
       para a string str
    */
    int tam_sugestao, sugestoes = 0;

    // Para cada um dos elementos do vetor de strings base...
    for (int i = 0; i < tamanho; i++)
    {
        /*
         sugerir será uma variável sentinela, que detecta se uma sugestão foi feita ou não
         O valor sugerir - 1 indica inicialmente que uma sugestão será feita.
        */
        int sugerir = 1;

        /*Pega-se o tamanho das duas strings que serão comparadas: a str que veio como
        parâmetro da função, e a string atual da base, localizada na posição i (base[i])
        */
        int tam_atual = strlen(base[i]);
        tam_sugestao = strlen(str) - 1;

        /*Se a string de teste for maior do que a string da base, não tem como se prefixo!
          Nesse caso, usamos a instrução continue para passar para a próxima execução do
          laço. O programa vai para o for, executa o i++ e continua a execução.
        */
        if (tam_atual < tam_sugestao)
            continue;

        // Se a string é menor ou igual, vamos comparar para ver se é prefixo...
        // Esse laço vai da primeira letra, e compara letra a letra as duas strings
        for (int j = 0; j < tam_sugestao; j++)
        {
            // Se as letras em posições correspondentes forem diferentes, então NÃO é prefixo!
            if (str[j] != base[i][j])
            {
                // Se não é prefixo, não vamos sugerir nada
                sugerir = 0;
                /*Também não precisamos mais continuar a comparação. A instrução break
                encerra a execução desse laço interno, controlado pela variável j.
                */
                break;
            }
        }

        /* Quando o laço de teste para saber se é prefixo encerra, existem duas possibilidades:
         - Se todas as letras foram iguais, a variável sugerir nunca é alterada, e chega
         nesse ponto do programa com o valor 1;
         - Se houve diferença, o valor de sugerir foi alterado para 0;
          Então se o valor for 1, o if será verdadeiro, e ele executará a impressão da string
          no formato especificado.
          Se for 0, ele não fará nada!
        */
        if (sugerir)
        {
            printf("Você quis dizer: %s?\n", base[i]);
            // Toda vez que imprimir uma sugestão, aumenta o contador em 1
            sugestoes++;
        }
    }
    // Se o laço que compara todas as strings da base encerrar e o valor de sugestoes
    // for 0, então nada foi sugerido.
    if (sugestoes == 0)
        printf("Sem recomendações\n");
}

int main()
{

    char consultas[TAM][MAX_TEXTO] = {0};
    // Adicionando uma variável string para ler as consultas de teste
    char string[MAX_TEXTO];
    int anteriores, novas;
    
    //PRIMEIRA
    scanf("%d\n", &anteriores);

    // Nossa função vai carregar a base lendo uma consulta de cada vez
    for (int i = 0; i < anteriores; i++)
        carrega_base(i, consultas); // chamada da função

    //SEGUNDA CONSULTA
    // Prepara para ler a sequencia de novas consultas
    scanf("%d\n", &novas); // Tratando o \n após o scanf :)

    // Para cada uma das strings de teste...
    for (int i = 0; i < novas; i++)
    {
        // Leitura da linha de texto da entrada, armazenando em string
        fgets(string, MAX_TEXTO, stdin);
        // Chama a função que testará se a string é prefixo, e que realiza a
        // impressão das sugestões
        imprime_sugestoes(string, anteriores, consultas);
        printf("\n");
    }
    return 0;
}