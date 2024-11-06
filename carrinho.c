// carrinho.c
#include <stdio.h>
#include "carrinho.h"
#include "produto.h"
#include "utils.h"

Carrinho c[MAX];
int totalCarrinho = 0;

void comprarProduto() {
    int codigo;
    codigo = lerInteiro("Digite o codigo do produto: ");
    int produtoIndex = pegarProdutoPorCodigo(codigo);

    if (produtoIndex != -1) {
        int carrinhoIndex = temNoCarrinho(codigo);
        if (carrinhoIndex != -1) {
            c[carrinhoIndex].quantidade++;
        } else if (totalCarrinho < MAX) {
            c[totalCarrinho].produto = p[produtoIndex];
            c[totalCarrinho].quantidade = 1;
            totalCarrinho++;
        } else {
            printf("Carrinho cheio!\n");
        }
    } else {
        printf("Produto não encontrado.\n");
    }
}

void visualizarCarrinho() {
    if (totalCarrinho > 0) {
        printf("\n-== Carrinho ==-\n");
        for (int i = 0; i < totalCarrinho; i++) {
            printf("Nome: %s | Preco: %.2f | Codigo: %d | Quantidade: %d\n", 
                   c[i].produto.nome, c[i].produto.preco, c[i].produto.codigo, c[i].quantidade);
        }
    } else {
        printf("Carrinho vazio.\n");
    }
}

int temNoCarrinho(int codigo) {
    for (int i = 0; i < totalCarrinho; i++) {
        if (c[i].produto.codigo == codigo) {
            return i;
        }
    }
    return -1;
}

// Outras funções omitidas para evitar duplicação.
