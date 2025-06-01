#include <stdio.h>

int main() {
    // Definição do número de casas para cada peça se mover.
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // --- Movimento da Torre (usando for) ---
    printf("--- Movimento da Torre ---\n");
    // A Torre se move 5 casas para a direita.
    for (int i = 0; i < casasTorre; i++) {
        // Imprime a direção a cada casa percorrida.
        printf("Direita\n");
    }
    printf("\n"); // Adiciona uma linha em branco para separar as seções.

    // --- Movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    // O Bispo se move 5 casas na diagonal para cima e à direita.
    while (contadorBispo < casasBispo) {
        // Imprime a combinação de direções para o movimento diagonal.
        printf("Cima, Direita\n");
        contadorBispo++; // Incrementa o contador para a próxima iteração.
    }
    printf("\n");

    // --- Movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = 0;
    // A Rainha se move 8 casas para a esquerda.
    do {
        // Imprime a direção a cada casa percorrida.
        printf("Esquerda\n");
        contadorRainha++; // Incrementa o contador.
    } while (contadorRainha < casasRainha);

    return 0; // Finaliza o programa com sucesso.
}
