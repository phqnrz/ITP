#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int idProduto;
    char descricao[20];
    float preco;
} Produto;

typedef struct itemProduto
{
    Produto produto;
    struct itemProduto *prox;
} Produtos;

typedef struct
{
    int idCliente;
    char nome[15];
    char celular[10];
} Cliente;

typedef struct itemCliente
{
    Cliente cliente;
    struct itemCliente *prox;
} Clientes;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

// typedef struct
// {
//     int idPedido;
//     Data data;
//     int idCliente;
// } Pedido;

typedef struct
{
    int idPedido;
    int idCliente;   
    int idProduto;
    int quantidade;
} PedidoItens;

typedef struct itemPedido
{
    PedidoItens pedido;
    struct itemPedido *prox;
} Pedidos;

// Cadastro direto de uma estrutura
Produto cadastraProduto();
Cliente cadastraCliente();
//PedidoItens cadastraPedido();

// Manipulação das listas de produto
Produtos *insereProduto(Produtos *prod, Produto p);
Produtos *adicionarProduto(Produtos *ps, Produto p);
Produtos *alteraProdutos(Produtos *ps);
Produtos *deletarProduto(Produtos *ps);
void printProdutos(Produtos *ps);

// Manipulação das listas de cliente
Clientes *insereClientes(Clientes *clie, Cliente c);
Clientes *adicionaClientes(Clientes *clie, Cliente c);
Clientes *alteraClientes(Clientes *cs);
Clientes *deletarClientes(Clientes *cs);
void printClientes(Clientes *cs);

//Manipulação das listas de pedidos
// Pedidos *inserePedidos(Pedidos *pedid, Pedidos ped);
// Pedidos *adicionarPedidos(Pedidos *peds, Pedidos ped);


int main(void)
{

    int opcao = 0;
    char tecladoLixo[20];
    Produtos *produtosL = NULL;

    Clientes *clientes = NULL;

    Pedidos *pedido = NULL;

    while (opcao != 9)
    {
        printf("");
        imprime_menu();

        scanf("%d", &opcao);

        if (opcao == 1)
        {

            produtosL = adicionarProduto(produtosL, cadastraProduto());
            printf("Pressione qualquer tecla e depois enter para voltar ao menu principal\n");
            scanf("%s", &tecladoLixo);
        }
        else if (opcao == 2)
        {
            printf("ESCOLHA UMA OPÇÃO\n");
            printf("| 1 - Listar\n| 2 - Alterar\n| 3 - Remover \n");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                printProdutos(produtosL);
            }
            else if (opcao == 2)
            {
                produtosL = alteraProdutos(produtosL);
            }
            else if (opcao == 3)
            {
                produtosL = deletarProduto(produtosL);
            }
            printf("Pressione qualquer tecla e depois enter para voltar ao menu principal\n");
            scanf("%s", &tecladoLixo);
        }
        else if (opcao == 3)
        {
            clientes = adicionaClientes(clientes, cadastraCliente());
            printf("Pressione qualquer tecla e depois enter para voltar ao menu principal\n");
            scanf("%s", &tecladoLixo);
        }
        else if (opcao == 4)
        {
            printf("ESCOLHA UMA OPÇÃO\n");
            printf("| 1 - Listar\n| 2 - Alterar\n| 3 - Remover \n");
            scanf("%d", &opcao);
            if (opcao == 1)
            {
                printClientes(clientes);
            }
            else if (opcao == 2)
            {
                clientes = alteraClientes(clientes);
            }
            else if (opcao == 3)
            {
                clientes = deletarClientes(clientes);
            }
            printf("Pressione qualquer tecla e depois enter para voltar ao menu principal\n");
            scanf("%s", &tecladoLixo);
        }
        else if (opcao == 5)
        {
            //pedido = adicionarPedidos(pedido, cadastraPedido());
            printf("Pressione qualquer tecla e depois enter para voltar ao menu principal\n");
            scanf("%s", &tecladoLixo);
        }
        else if (opcao == 6)
        {
        }
        else if (opcao == 7)
        {
        }
        else if (opcao == 8)
        {
        }
        else if (opcao == 9)
        {
        }
        else
        {
        }
    }
    printf("Programa encerrado!");

    return 0;
}


// -- Implementando as funções --

//Imprimir o menu de opções
void imprime_menu() {

    printf("");

    printf(" ================================================\n");
    printf("|            = SEJA BEM VINDO AO SGBD =          |\n");
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
    printf(" ================================================ \n");
}

//Função data atual
void data_atual(){
    
    time_t data_atual;
    data_atual = time(NULL);
    struct tm dt = *localtime(&data_atual);
    printf("Data: %d/%d/%d\n", dt.tm_mday, dt.tm_mon + 1, dt.tm_year + 1900);
}

// Cadastro direto de uma estrutura
Cliente cadastraCliente()
{
    Cliente clieL;

    printf("Digite um código para o cliente:\n");
    scanf("%d", &clieL.idCliente);
    printf("Digite o nome do cliente:\n");
    scanf("%s", clieL.nome);
    printf("Digite o celular do cliente:\n");
    scanf("%s", &clieL.celular);
    printf("\nCliente cadastrado com sucesso!\n");

    return clieL;
}
Produto cadastraProduto()
{
    Produto prodL;

    printf("Digite um código para o produto:\n");
    scanf("%d", &prodL.idProduto);
    printf("Digite o nome do produto:\n");
    scanf("%s", prodL.descricao);
    printf("Digite o preço do produto:\n");
    scanf("%f", &prodL.preco);

    printf("\nProduto cadastrado com sucesso!\n");
    return prodL;
}

// PedidoItens cadastraPedido()
// {
//     PedidoItens pedidoL;

//     printf("Informe um código para o pedido:\n");
//     scanf("%d", &pedidoL.idPedido);
//     printf("Informe o código do cliente:\n");
//     scanf("%d", &pedidoL.idCliente);
//     data_atual();
//     printf("Informe o código do produto:\n");
//     scanf("%d", &pedidoL.idProduto);
//     printf("Informe a quantidade do produto:\n");
//     scanf("%d", &pedidoL.quantidade);

//     printf("\nPedido cadastrado com sucesso!\n");
//     return pedidoL;
// }

// Manipulação das listas de Produto
Produtos *insereProduto(Produtos *prod, Produto p)
{
    Produtos *newprod = malloc(sizeof(Produtos));
    newprod->produto = p;
    newprod->prox = prod;
    return newprod;
}

void printProdutos(Produtos *ps)
{
    Produtos *p = ps;
    printf("---- Produtos na lista: -----\n");
    printf("   Código   |       Descrição      |   Preço   \n");

    while (p != NULL)
    {
        printf("     %d     |    %s", p->produto.idProduto, p->produto.descricao);
        int contadorEspacos = strlen(p->produto.descricao);
        while (contadorEspacos < 20)
        {
            printf(" ");
            contadorEspacos++;
        }
        printf("|   %0.2f\n", p->produto.preco);
        // p->produto.descricao;
        // p->produto.preco);

        p = p->prox;
    }
    printf("----------------------------\n");
}

Produtos *adicionarProduto(Produtos *ps, Produto p)
{
    Produtos *lastp = ps;
    // checa se a lista está vazia
    if (lastp == NULL)
        return insereProduto(NULL, p);
    else
    {
        // avança até encontrar o último
        while (lastp->prox != NULL)
            lastp = lastp->prox;
        lastp->prox = insereProduto(NULL, p);
        // o primeiro continua sendo ps
        return ps;
    }
}

Produtos *alteraProdutos(Produtos *ps)
{
    Produtos *p = ps;
    int opcao = 0;
    printf("ESCOLHA UMA OPÇÃO\n");
    printf("| 1-Alterar produto pelo código\n| 2-Alterar produto pelo nome\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        int codigo = 0;
        printf("Digite o código\n");
        scanf("%d", &codigo);
        while (p != NULL)
        {
            if (p->produto.idProduto == codigo)
            {
                printf("| 1 para alterar descrição\n| 2 para alterar preço");
                scanf("%d", &opcao);
                if (opcao == 1)
                {

                    printf("Deseja alterar %s para qual nome?\n", p->produto.descricao);
                    scanf("%s", p->produto.descricao);
                    printf("\nNome alterado com sucesso\n");
                }
                else if (opcao == 2)
                {
                    printf("Qual o novo preço?");
                    scanf("%f", &p->produto.preco);
                    printf("\nPreço alterado com sucesso!\n");
                }
                else
                {
                    printf("Opcao inválida");
                }
            }
            p = p->prox;
        }
    }
    else if (opcao == 2)
    {
        char nomeL[40];
        printf("Digite o nome\n");
        scanf("%s", &nomeL);
        while (p != NULL)
        {

            if (strcmp(p->produto.descricao, nomeL) == 0)
            {
                printf("| 1 para alterar descrição\n| 2 para alterar preço\n");
                scanf("%d", &opcao);
                if (opcao == 1)
                {

                    printf("Deseja alterar %s para qual nome?\n", p->produto.descricao);
                    scanf("%s ", p->produto.descricao);
                    printf("\nNome alterado com sucesso!\n");
                }
                else if (opcao == 2)
                {
                    printf("Qual o novo preço?");
                    scanf("%f ", &p->produto.preco);
                    printf("\nPreço alterado com sucesso!\n");
                }
                else
                {
                    printf("Opcao inválida!\n");
                }
            }
            p = p->prox;
        }
    }
    else
    {
        printf("Opção inválida\n");
    }

    printf("----------------------------\n");
    return ps;
}

Produtos *deletarProduto(Produtos *ps)
{
    Produtos *pant, *pprox;
    int opcao = 0;
    printf("ESCOLHA UMA OPÇÃO\n");
    printf("| 1-Alterar produto pelo código\n| 2-Alterar produto pelo nome\n");
    scanf("%d", &opcao);

    // verifica se existe alguém na lista
    if (opcao == 1)
    {
        int codigo;
        printf("Digite o código:\n");
        scanf("%d", &codigo);
        if (ps != NULL)
        {
            pant = ps;
            pprox = pant->prox;
            // verifica logo se o 1o elemento na lista
            // é o que será deletado
            if (pant->produto.idProduto == codigo)
            {
                printf("Deletado com sucesso!\n");
                free(pant);
                return pprox;
            }
            else
            {
                while (pprox != NULL)
                {
                    // o próximo é o que estamos procurando?
                    if (pprox->produto.idProduto == codigo)
                    {
                        printf("Deletado com sucesso!\n");
                        // o próx. do próx. será o próx. do anterior
                        pant->prox = pprox->prox;
                        // remove o que estávamos procurando
                        free(pprox);
                    }
                    // avança para o próximo
                    pant = pprox;
                    pprox = pprox->prox;
                }
            }
        }
    }
    else if (opcao == 2)
    {

        char nomeProduto[40];
        printf("Digite o nome:\n");
        scanf("%s", nomeProduto);
        if (ps != NULL)
        {
            pant = ps;
            pprox = pant->prox;
            // verifica logo se o 1o elemento na lista
            // é o que será deletado
            if (strcmp(pant->produto.descricao, nomeProduto) == 0)
            {
                printf("Deletado com sucesso!\n");
                free(pant);
                return pprox;
            }
            else
            {
                while (pprox != NULL)
                {
                    // o próximo é o que estamos procurando?
                    if (strcmp(pprox->produto.descricao, nomeProduto) == 0)
                    {
                        printf("Deletado com sucesso!\n");
                        // o próx. do próx. será o próx. do anterior
                        pant->prox = pprox->prox;
                        // remove o que estávamos procurando
                        free(pprox);
                    }
                    // avança para o próximo
                    pant = pprox;
                    pprox = pprox->prox;
                }
            }
        }
    }
    else
    {

        printf("\nOpção invalida\n");
    }
    return ps;
}

// manipulação das listas de Cliente
Clientes *insereClientes(Clientes *clie, Cliente c)
{
    Clientes *newcli = malloc(sizeof(Clientes));
    newcli->cliente = c;
    newcli->prox = clie;
    return newcli;
}

Clientes *adicionaClientes(Clientes *clie, Cliente c)
{
    Clientes *lastc = clie;
    // checa se a lista está vazia
    if (lastc == NULL)
        return insereClientes(NULL, c);
    else
    {
        // avança até encontrar o último
        while (lastc->prox != NULL)
            lastc = lastc->prox;
        lastc->prox = insereClientes(NULL, c);
        // o primeiro continua sendo ps
        return clie;
    }
}

void printClientes(Clientes *cs)
{
    Clientes *c = cs;
    printf("---- Lista de clientes: -----\n");
    printf("   Código   |          Nome         |   Celular   \n");

    while (c != NULL)
    {
        printf("     %d     |    %s", c->cliente.idCliente, c->cliente.nome);
        int contadorEspacos = strlen(c->cliente.nome);
        while (contadorEspacos < 20)
        {
            printf(" ");
            contadorEspacos++;
        }
        printf("|   %s\n", c->cliente.celular);
        // p->produto.descricao;
        // p->produto.preco);

        c = c->prox;
    }
    printf("----------------------------\n");
}

Clientes *alteraClientes(Clientes *cs)
{

    Clientes *c = cs;

    int opcao = 0;
    printf("ESCOLHA UMA OPÇÃO\n");
    printf("| 1-Alterar cliente pelo código\n| 2-Alterar cliente pelo nome\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        int codigo = 0;
        printf("Digite o código\n");
        scanf("%d", &codigo);
        while (c != NULL)
        {
            if (c->cliente.idCliente == codigo)
            {
                printf("| 1 para alterar nome\n| 2 para alterar telefone");
                scanf("%d", &opcao);
                if (opcao == 1)
                {

                    printf("Deseja alterar %s para qual nome?\n", c->cliente.nome);
                    scanf("%s", c->cliente.nome);
                    printf("\nNome alterado com sucesso\n");
                }
                else if (opcao == 2)
                {
                    printf("Qual o novo telefone?");
                    scanf("%f", &c->cliente.celular);
                    printf("\nPreço alterado com sucesso\n");
                }
                else
                {
                    printf("Opcao inválida");
                }
            }
            c = c->prox;
        }
    }
    else if (opcao == 2)
    {
        char nomeL[40];
        printf("Digite o nome\n");
        scanf("%s", &nomeL);
        while (c != NULL)
        {

            if (strcmp(c->cliente.nome, nomeL) == 0)
            {
                printf("| 1 para alterar nome\n| 2 para alterar telefone\n");
                scanf("%d", &opcao);
                if (opcao == 1)
                {

                    printf("Deseja alterar %s para qual nome?\n", c->cliente.nome);
                    scanf("%s", c->cliente.nome);
                    printf("\nNome alterado com sucesso\n");
                }
                else if (opcao == 2)
                {
                    printf("Qual o novo telefone?");
                    scanf("%f", &c->cliente.celular);
                    printf("\nTelefone alterado com sucesso\n");
                }
                else
                {
                    printf("Opcao inválida\n");
                }
            }
            c = c->prox;
        }
    }
    else
    {
        printf("Opcao inválida\n");
    }

    printf("----------------------------\n");
    return cs;
}

Clientes *deletarClientes(Clientes *cs)
{
    Clientes *clie_ant, *clie_prox;

    int opcao = 0;

    printf("ESCOLHA UMA OPÇÃO\n");
    printf("| 1-Alterar cliente pelo código\n| 2-Alterar cliente pelo nome\n");
    scanf("%d", &opcao);

    // verifica se existe alguém na lista
    if (opcao == 1)
    {
        int codigo;
        printf("Digite o código:\n");
        scanf("%d", &codigo);

        if (cs != NULL)
        {
            clie_ant = cs;
            clie_prox = clie_ant->prox;
            // verifica logo se o 1o elemento na lista
            // é o que será deletado
            if (clie_ant->cliente.idCliente == codigo)
            {
                printf("Deletado com sucesso!\n");
                free(clie_ant);
                return clie_prox;
            }
            else
            {
                while (clie_prox != NULL)
                {
                    // o próximo é o que estamos procurando?
                    if (clie_prox->cliente.idCliente == codigo)
                    {
                        printf("Deletado com sucesso!\n");
                        // o próx. do próx. será o próx. do anterior
                        clie_ant->prox = clie_prox->prox;
                        // remove o que estávamos procurando
                        free(clie_prox);
                    }
                    // avança para o próximo
                    clie_ant = clie_prox;
                    clie_prox = clie_prox->prox;
                }
            }
        }
    }
    else if (opcao == 2)
    {

        char nomeCliente[40];
        printf("Digite o nome:\n");
        scanf("%s", nomeCliente);
        if (cs != NULL)
        {
            clie_ant = cs;
            clie_prox = clie_ant->prox;
            // verifica logo se o 1o elemento na lista
            // é o que será deletado
            if (strcmp(clie_ant->cliente.nome, nomeCliente) == 0)
            {
                printf("Deletado com sucesso!\n");
                free(clie_ant);
                return clie_prox;
            }
            else
            {
                while (clie_prox != NULL)
                {
                    // o próximo é o que estamos procurando?
                    if (strcmp(clie_prox->cliente.nome, nomeCliente) == 0)
                    {
                        printf("Deletado com sucesso!\n");
                        // o próx. do próx. será o próx. do anterior
                        clie_ant->prox = clie_prox->prox;
                        // remove o que estávamos procurando
                        free(clie_prox);
                    }
                    // avança para o próximo
                    clie_ant = clie_prox;
                    clie_prox = clie_prox->prox;
                }
            }
        }
    }
    else
    {

        printf("\nOpção invalida\n");
    }
    return cs;
}

//Pedidos
// Pedidos *inserePedidos(Pedidos *pedid, Pedidos ped)
// {
//     Pedidos *newPed = malloc(sizeof(Pedidos));
//     newPed->pedido = ped;
//     newPed->prox = pedid;
//     return newPed;
// }

// Pedidos *adicionarPedidos(Pedidos *peds, Pedidos ped)
// {
//     Pedidos *lastPed = peds;
//     // checa se a lista está vazia
//     if (lastPed == NULL)
//         return inserePedidos(NULL, ped);
//     else
//     {
//         // avança até encontrar o último
//         while (lastPed->prox != NULL)
//             lastPed = lastPed->prox;
//         lastPed->prox = inserePedidos(NULL, ped);
//         // o primeiro continua sendo ps
//         return peds;
//     }
// }