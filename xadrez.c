#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar printf

int main() {
    printf("Desafio Xadrez!\"n);
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("--- Movimento do Bispo (5 casas na Diagonal Cima, Direita) ---\n");
    int contador_bispo = 0; 
    while (contador_bispo < 5) {
        printf("Cima, Direita\n"); 
        contador_bispo++; 
    }
    printf("\n");

    printf("--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    int contador_rainha = 0;

    do {
        printf("Esquerda\n");
        contador_rainha++; 
    } while (contador_rainha < 8);
    printf("\n");

    printf("--- Movimento do Cavalo (2 casas para Baixo e 1 casa para a Esquerda) ---\n");

    const int casas_baixo = 2;
    const int casas_esquerda = 1;

    int passo_l;
    for (passo_l = 0; passo_l < casas_baixo; passo_l++) {
        printf("Baixo\n");
    }

    int passo_perpendicular = 0;
    while (passo_perpendicular < casas_esquerda) {
        printf("Esquerda\n");
        passo_perpendicular++;
    }
    printf("\n"); 
}