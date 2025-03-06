#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
        // Movimento da Torre: 5 casas para a direita (usando for)
        printf("Movimento da Torre:\n");
        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
        }
    
        // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
        printf("Movimento do Bispo:\n");
        int casa_bispo = 1;
        while (casa_bispo <= 5) {
            printf("Cima, Direita\n");
            casa_bispo++;
        }
    
        // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
        printf("\nMovimento da Rainha:\n");
        int casa_rainha = 1;
        do {
            printf("Esquerda\n");
            casa_rainha++;
        } while (casa_rainha <= 8);
    
        return 0;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
