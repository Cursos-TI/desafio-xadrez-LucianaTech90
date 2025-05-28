#include <stdio.h> //

int main() {
    printf("Desafio Xadrex!\n");
    
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    int i; 
    for (i = 0; i < 5; i++) {
        printf("Direita\n"); 
    }
    printf("\n"); 

    printf("--- Movimento do Bispo (5 casas na Diagonal Cima-Direita) ---\n");
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

    return 0;
}
    printf("Novo comite!\n");