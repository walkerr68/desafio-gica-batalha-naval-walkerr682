#include <stdio.h>

#define N 10  // Tamanho do tabuleiro (10x10)

int main() {
    int tabuleiro[N][N] = {0}; // Inicializa tabuleiro com 0

    // 1. CONE (forma de pirâmide)
    if (tabuleiro[0][4] == 0) tabuleiro[0][4] = 1;

    for (int j = -1; j <= 1; j++) {
        int x = 1;
        int y = 4 + j;
        if (x >= 0 && x < N && y >= 0 && y < N && tabuleiro[x][y] == 0)
            tabuleiro[x][y] = 1;
    }

    for (int j = -2; j <= 2; j++) {
        int x = 2;
        int y = 4 + j;
        if (x >= 0 && x < N && y >= 0 && y < N && tabuleiro[x][y] == 0)
            tabuleiro[x][y] = 1;
    }

    // 2. CRUZ (em cruz)
    for (int i = -2; i <= 2; i++) {
        int x = 6 + i;
        int y = 4;
        if (x >= 0 && x < N && tabuleiro[x][y] == 0)
            tabuleiro[x][y] = 2;

        x = 6;
        y = 4 + i;
        if (y >= 0 && y < N && tabuleiro[x][y] == 0)
            tabuleiro[x][y] = 2;
    }

    // 3. OCTAEDRO (losango)
    if (tabuleiro[2][8] == 0) tabuleiro[2][8] = 3;
    if (tabuleiro[3][7] == 0) tabuleiro[3][7] = 3;
    if (tabuleiro[3][8] == 0) tabuleiro[3][8] = 3;
    if (tabuleiro[3][9] == 0) tabuleiro[3][9] = 3;
    if (tabuleiro[4][8] == 0) tabuleiro[4][8] = 3;

    // -----------------------
    // Exibir letras nas colunas
    // -----------------------
    printf("    ");  // Espaço para alinhar com os números das linhas
    for (int j = 0; j < N; j++) {
        printf(" %c", 'A' + j);  // Letras A, B, C, ..., J
    }
    printf("\n");

    printf("   +");
    for (int j = 0; j < N; j++) {
        printf("--");
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf(" %2d|", i);  // Número da linha com separador
        for (int j = 0; j < N; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Legenda
    printf("\nLegenda:\n");
    printf(" 0 = Sem efeito\n");
    printf(" 1 = Cone\n");
    printf(" 2 = Cruz\n");
    printf(" 3 = Octaedro\n");

    return 0;
}