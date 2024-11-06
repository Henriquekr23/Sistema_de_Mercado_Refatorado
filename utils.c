// utils.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lerInteiro(const char *mensagem) {
    int valor;
    printf("%s", mensagem);
    scanf("%d", &valor);
    return valor;
}

float lerFloat(const char *mensagem) {
    float valor;
    printf("%s", mensagem);
    scanf("%f", &valor);
    return valor;
}

void lerString(char *buffer, int tamanho) {
    printf("Digite a string: ");
    fgets(buffer, tamanho, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
}
