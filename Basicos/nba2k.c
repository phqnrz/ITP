
/*Conversor de medidas NBA2K
    Ler medidas em pés e libras e converter
    para metros e quilos*/
# include <stdio.h>
int main() {
//Definindo variáveis
float altura_pes, altura_metros;
float peso_libras, peso_quilos;
//Recebendo os valores
    printf("Digite o valor da altura (pes): ");
    scanf("%f", &altura_pes);
    printf("Digite o valor do peso (libras): ");
    scanf("%f", &peso_libras);
//Convertendo os valores recebidos
altura_metros = 0.3038 * altura_pes;
peso_quilos = 0.454 * peso_libras;

//Imprimindo o resultado
    printf("\nAltura em Metros: %.2f\n", altura_metros);
    printf("Peso em Kgs: %.2f\n", peso_quilos);

    return 0;
}