#include <stdio.h>

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

    // Movimento do Cavalo: 2 casas para baixo e 1 casa para a esquerda (usando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    int casas_baixo = 2;  // Número de casas para baixo
    int casas_esquerda = 1;  // Número de casas para a esquerda

    // Loop for para as casas para baixo
    for (int i = 1; i <= casas_baixo; i++) {
        printf("Baixo\n");
    }

    // Loop while para a casa para a esquerda
    int i = 1;
    while (i <= casas_esquerda) {
        printf("Esquerda\n");
        i++;
    }

    return 0;
}