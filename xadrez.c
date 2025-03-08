#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (cima e direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo (cima e direita em "L")
void moverCavalo() {
    int casas_cima = 2; // Número de casas para cima
    int casas_direita = 1; // Número de casas para a direita

    // Loop para as casas para cima
    for (int i = 1; i <= casas_cima; i++) {
        printf("Cima\n");
    }

    // Loop para a casa para a direita
    for (int i = 1; i <= casas_direita; i++) {
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoLoopsAninhados(int casas) {
    // Loop externo para o movimento vertical (cima)
    for (int i = 1; i <= casas; i++) {
        // Loop interno para o movimento horizontal (direita)
        for (int j = 1; j <= casas; j++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5); // Mover 5 casas para a direita
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo:\n");
    moverBispo(5); // Mover 5 casas na diagonal (cima e direita)
    printf("\n");

    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Mover 8 casas para a esquerda
    printf("\n");

    // Movimento do Cavalo (loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Mover 2 casas para cima e 1 para a direita
    printf("\n");

    // Movimento do Bispo com loops aninhados
    printf("Movimento do Bispo com Loops Aninhados:\n");
    moverBispoLoopsAninhados(5); // Mover 5 casas na diagonal (cima e direita)
    printf("\n");

    return 0;
}