#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int idProduto;
    char descricao[40];
    float preco;
} Produto;

typedef struct
{
    int idCliente;
    char nome[30];
    char celular[10];
} Cliente;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int idPedido;
    Data data;
    char idCliente;
} Pedido;

typedef struct
{
    int idPedido;
    int idProduto;
    float quantidade;
} PedidoItens;





int main (void) {

printf("");

printf(" ================================================\n");
printf("|       = SEJA BEM VINDO AO SISTEMA CRUD =       |\n");
printf(" ================================================\n");
printf("| ESCOLHA UMA OPCAO:                             |\n");
printf("| 1 - insere um produto no cadastro              |\n");
printf("| 2 - lista/altera/remove produto(s) do cadastro |\n");
printf("| 3 - insere um cliente no cadastro              |\n");
printf("| 4 - lista/altera/remove cliente(s) do cadastro |\n");
printf("| 5 - insere um novo pedido                      |\n");
printf("| 6 - lista os pedidos ja realizados             |\n");
printf("| 7 - exibe nota fiscal de um pedido             |\n");
printf("| 9 - encerra o programa                         |\n");
printf(" ================================================");

return 0;
}