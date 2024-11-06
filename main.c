// main.c
#include <stdio.h>
#include "produto.h"
#include "carrinho.h"
#include "utils.h"

void menu() {
    int opcao;
    do {
        printf("\n-=============-\n-=| MERCADO |=-\n-=============-\n\n");
        printf("(1) Cadastrar Produtos\n(2) Listar Produtos\n(3) Comprar Produtos\n(4) Visualizar Carrinho\n(5) Informações de Produto\n(6) Fechar Pedido\n(0) Sair\n");
        
        opcao = lerInteiro("Digite a funcionalidade desejada: ");
        switch (opcao) {
            case 1: cadastrarProdutos(); break;
            case 2: listarProdutos(); break;
            case 3: comprarProduto(); break;
            case 4: visualizarCarrinho(); break;
            case 5: infoProduto(); break;
            case 6: fecharPedido(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida\n");
        }
    } while (opcao != 0);
}

int main() {
    menu();
    return 0;
}
