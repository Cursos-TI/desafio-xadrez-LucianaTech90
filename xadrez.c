#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Simulação do Movimento da Torre (usando for) ---
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    int i; // Variável de controle para o loop for
    for (i = 0; i < 5; i++) {
        printf("Direita\n"); // A torre move uma casa para a direita
    }
    printf("\n"); // Adiciona uma linha em branco para separar as simulações

    // --- Simulação do Movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo (5 casas na Diagonal Cima-Direita) ---\n");
    int contador_bispo = 0; // Variável de controle para o loop while
    while (contador_bispo < 5) {
        printf("Cima, Direita\n"); // O bispo move uma casa na diagonal Cima-Direita
        contador_bispo++;          // Incrementa o contador
    }
    printf("\n"); // Adiciona uma linha em branco para separar as simulações

    // --- Simulação do Movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    int contador_rainha = 0; // Variável de controle para o loop do-while
    // O loop do-while garante que o bloco de código seja executado pelo menos uma vez,
    // o que é adequado para simular o primeiro movimento antes da verificação da condição.
    do {
        printf("Esquerda\n"); // A rainha move uma casa para a esquerda
        contador_rainha++;    // Incrementa o contador
    } while (contador_rainha < 8);
    printf("\n"); // Adiciona uma linha em branco no final

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
