// produto.h
#ifndef PRODUTO_H
#define PRODUTO_H

#define MAX 50

typedef struct {
    int codigo;
    char nome[30];
    float preco;
} Produto;

void cadastrarProdutos();
void listarProdutos();
void atualizarInformacoes();
void infoProduto();
int pegarProdutoPorCodigo(int codigo);

#endif // PRODUTO_H
