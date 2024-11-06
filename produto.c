// produto.c
#include <stdio.h>
#include <string.h>
#include "produto.h"
#include "utils.h"

Produto p[MAX];
int totalProdutos = 0;

void cadastrarProdutos() {
    int quantidade;
    printf("\n-== Cadastro de Produtos ==-\n");
    quantidade = lerInteiro("Digite quantos produtos deseja cadastrar: ");
    
    if (totalProdutos + quantidade <= MAX) {
        for (int i = totalProdutos; i < totalProdutos + quantidade; i++) {
            printf("Nome do produto %d: ", i+1);
            lerString(p[i].nome, sizeof(p[i].nome));
            p[i].preco = lerFloat("Preco do produto: ");
            
            do {
                p[i].codigo = lerInteiro("Codigo do produto: ");
                if (p[i].codigo < 10) {
                    printf("Codigo invalido, deve ser maior que 9\n");
                }
            } while (p[i].codigo < 10);
            printf("Produto Cadastrado!\n\n");
        }
        totalProdutos += quantidade;
    } else {
        printf("Espaco insuficiente para cadastro.\n");
    }
}

void listarProdutos() {
    if (totalProdutos > 0) {
        printf("\n-== Produtos Cadastrados ==-\n");
        for (int i = 0; i < totalProdutos; i++) {
            printf("Nome: %s | Preco: %.2f | Codigo: %d\n", p[i].nome, p[i].preco, p[i].codigo);
        }
    } else {
        printf("Nenhum produto cadastrado.\n");
    }
}

int pegarProdutoPorCodigo(int codigo) {
    for (int i = 0; i < totalProdutos; i++) {
        if (p[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

// Demais funções omitidas para evitar duplicação.
