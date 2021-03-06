#include <stdio.h>

void imprime_menu()
{
    printf("\nEscolha a opcao:\n");
    printf("1 - Informar triangulo\n");
    printf("2 - Testar se eh um triangulo valido\n");
    printf("3 - Testar tipo em relacao aos angulos\n");
    printf("4 - Testa tipo em relacao aos lados\n");
    printf("5 - Relizar todos os testes\n");
    printf("6 - Encerrar programa\n");
    printf("Selecione: ");
}

int testa_validade(int l1, int l2, int l3) {
    if(l1 >= l2 + l3) {
        printf("Nao eh um triangulo valido!\n");
        return 0;
    } else {
        return 1;
    }
}

void testa_angulos(int l1, int l2, int l3) {
    if(l1*l1 == l2*l2 + l3*l3)
        printf("Triangulo retangulo.\n");
    else if (l1 * l1 > l2 * l2 + l3 * l3)
        printf("Triangulo Obtusangulo.\n");
    else 
    printf("Triangulo Acutangulo.\n");
}

void testa_lados(int l1, int l2, int l3) {
    if (l1 == l2 && l1 == l3)
        printf("Triangulo Equilatero\n");
    else if (l1 == l2 || l1 == l3 || l2 == l3)
        printf("Triangulo Isoceles\n");
    else
        printf("Triangulo Escaleno\n");
}

    int main(void)
{
    int op, init;
    int lado1, lado2, lado3, aux;

    /*Essa variável vai ser utilizada para verificar se os 3 lados já
      foram lidos. Quando o valor for 0 indica que a leitura ainda não
      ocorreu, se for 1 indica que a leitura ocorreu.
    */
    init = 0;

    printf("Bem vindo ao triangulizer!\n\n");

    do
    {
       imprime_menu();
       scanf("%d", &op);

        switch (op) {
        case 1:
            scanf("%d %d %d", &lado1, &lado2, &lado3);
            init = 1;
            // Para facilitar os testes, vou deixar lado1 como o maior lado
            if (lado2 > lado1 && lado2 > lado3) {
                aux = lado2;
                lado2 = lado1;
                lado1 = aux;
            }
            else if (lado3 > lado1 && lado3 > lado2) {
                aux = lado3;
                lado3 = lado1;
                lado1 = aux;
            }
            
            printf("Triangulo lido com sucesso!\n");
            break;
        case 2:
            // Para rodar, precisa ter um triângulo informado
            if (init != 0) {
                // Teste se é triângulo
                if (testa_validade(lado1, lado2, lado3) == 1)
                    printf("Triangulo valido\n");
            }
            break;
        case 3:
            // Para testar, tem que ter um triângulo informado válido
            if (init != 0) {
                if (testa_validade(lado1, lado2, lado3) == 1) {
                    testa_angulos(lado1, lado2, lado3);
                }
            }
            break;
        case 4:
            // Para testar, tem que ter um triângulo informado válido
            if (init != 0) {
                if (testa_validade(lado1, lado2, lado3) == 1) {
                    testa_lados(lado1, lado2, lado3);
                }
            }
            break;
        case 5:
            // Para testar, tem que ter um triângulo informado válido
            if (init != 0) {
                if (testa_validade(lado1, lado2, lado3) == 1) {
                    testa_angulos(lado1, lado2, lado3);
                    testa_lados(lado1, lado2, lado3);
                }
            }
            break;
        case 6:
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (op != 6);

    return 0;
}