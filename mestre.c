#include <stdio.h>

#define TAM 6

void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

void posicionarNavios(int tabuleiro[TAM][TAM]) {
    // Navio 1: Vertical de tamanho 3 (coluna 0, linhas 1 a 3)
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][0] = 1;
    }

    // Navio 2: Horizontal de tamanho 4 (linha 5, colunas 1 a 4)
    for (int j = 1; j <= 4; j++) {
        tabuleiro[5][j] = 2;
    }

    // Navio 3: Vertical de tamanho 2 (coluna 5, linhas 2 e 3)
    for (int i = 2; i <= 3; i++) {
        tabuleiro[i][5] = 3;
    }
}

void executarJogadas(int tabuleiro[TAM][TAM]) {
    // Jogadas automáticas
    int jogadas[7][2] = {
        {1, 0}, // acerta navio 1
        {5, 2}, // acerta navio 2
        {3, 5}, // acerta navio 3
        {0, 0}, // erro
        {5, 5}, // erro
        {2, 5}, // acerta navio 3
        {4, 4}  // erro
    };

    printf(">>> BATALHA NAVAL - NÍVEL MESTRE <<<\n\n");

    for (int i = 0; i < 7; i++) {
        int linha = jogadas[i][0];
        int coluna = jogadas[i][1];

        printf("Jogada %d: (%d, %d) - ", i + 1, linha, coluna);

        if (tabuleiro[linha][coluna] == 1) {
            printf("Acertou o Navio 1 (Vertical)!\n");
        } else if (tabuleiro[linha][coluna] == 2) {
            printf("Acertou o Navio 2 (Horizontal)!\n");
        } else if (tabuleiro[linha][coluna] == 3) {
            printf("Acertou o Navio 3 (Vertical)!\n");
        } else {
            printf("Água (Errou)!\n");
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    inicializarTabuleiro(tabuleiro);
    posicionarNavios(tabuleiro);
    executarJogadas(tabuleiro);

    return 0;
}
