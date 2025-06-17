#include <stdio.h>

int main() {
    // Tabuleiro 5x5 (tamanho adequado para o nível novato)
    int tabuleiro[5][5] = {0};

    // Posicionamento dos navios
    // Navio 1 - Vertical (posição fixa: coluna 1, linhas 1 a 3)
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][1] = 1;
    }

    // Navio 2 - Horizontal (posição fixa: linha 4, colunas 2 a 4)
    for (int j = 2; j <= 4; j++) {
        tabuleiro[4][j] = 2;
    }

    // Exibindo as coordenadas de cada parte dos navios
    printf("Coordenadas do Navio Vertical (valor 1):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    printf("\nCoordenadas do Navio Horizontal (valor 2):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
