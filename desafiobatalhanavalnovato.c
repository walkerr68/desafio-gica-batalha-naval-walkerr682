#include <stdio.h>

int main() {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    char tabuleiro[10][10];

    // Inicializar o tabuleiro com '0'
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            tabuleiro[i][j] = '0';

    // Inserir navios (exemplos)
    tabuleiro[1][5] = '3';
    tabuleiro[1][6] = '3';
    tabuleiro[1][7] = '3';
    tabuleiro[6][3] = '3';
    tabuleiro[7][3] = '3';
    tabuleiro[8][3] = '3';

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