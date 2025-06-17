#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0}; // Tabuleiro 5x5 zerado
    int i, j;

    // Posicionamento dos navios (já preenchido)
    // Navio 1 (Vertical): coluna 0, linhas 0 a 2
    for (i = 0; i < 3; i++) {
        tabuleiro[i][0] = 1;
    }

    // Navio 2 (Horizontal): linha 4, colunas 2 a 4
    for (j = 2; j < 5; j++) {
        tabuleiro[4][j] = 2;
    }

    // Simulação de jogadas automáticas
    int jogadas[5][2] = {
        {0, 0}, // acerto
        {1, 1}, // erro
        {2, 0}, // acerto
        {4, 3}, // acerto
        {3, 3}  // erro
    };

    printf(">>> BATALHA NAVAL - NÍVEL AVENTUREIRO <<<\n\n");
    for (i = 0; i < 5; i++) {
        int linha = jogadas[i][0];
        int coluna = jogadas[i][1];

        printf("Jogada %d: (%d, %d) - ", i + 1, linha, coluna);

        if (tabuleiro[linha][coluna] == 1) {
            printf("Acertou o Navio Vertical!\n");
        } else if (tabuleiro[linha][coluna] == 2) {
            printf("Acertou o Navio Horizontal!\n");
        } else {
            printf("Água (Errou)!\n");
        }
    }

    return 0;
}
