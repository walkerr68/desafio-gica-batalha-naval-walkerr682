#include <stdio.h>

int main() {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char tabuleiro[10][10];

    // Inicializar o tabuleiro com '0'
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = '0';

    // Navio 1: Diagonal principal (3 células)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = '3';  // [0][0], [1][1], [2][2]
    }

    // Navio 2: Vertical na coluna 5 (3 células)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][5] = '3';  // [0][5] a [2][5]
    }

    // Navio 3: Horizontal na linha 6 (3 células)
    for (int j = 2; j <= 4; j++) {
        tabuleiro[6][j] = '3';  // [6][2] a [6][4]
    }

    // Navio 4: Diagonal invertida começando em [4][9] (3 células)
    for (int i = 0; i < 3; i++) {
        tabuleiro[4 + i][9 - i] = '3';  // [4][9], [5][8], [6][7]
    }

    // Exibir cabeçalho
    printf(" TABULEIRO BATALHA NAVAL\n  ");
    for (int i = 0; i < 10; i++) {
        printf(" %c", letras[i]);
    }
    printf("\n");

    // Exibir linhas do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Números de 1 a 10 com espaçamento
        for (int j = 0; j < 10; j++) {
            printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}