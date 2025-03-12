#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

/* AVISO IMPORTANTE - Precise pedi ajuda para o chatGPT 
pois não estava conseguindo colocar os navios e 
também usei ele para otimizar o código*/
#define LINHAS 10
#define COLUNAS 10

int main() {
    // Tabuleiro 10x10, inicializado com 0
    int tabuleiro[LINHAS][COLUNAS] = {0}; 

    // Imprime o tabuleiro inicializada
    printf("Tabuleiro inicializado com 0:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

     // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    // Substitui os valores 0 por 1, simbolizando áreas afetadas
    int posicoes[21][2] = {  
        {0, 2}, {1, 1}, {1, 2}, {1, 3}, {2, 0}, {2, 1}, {2, 2}, {2, 3}, {2, 4},
        {0, 8}, {1, 7}, {1, 8}, {1, 9}, {2, 8}, {6, 2}, {7, 0}, {7, 1}, {7, 2},
        {7, 3}, {7, 4}, {8, 2}
    };

    // Preenche as posições especificadas com 1
    for (int i = 0; i < 21; i++) {
        tabuleiro[posicoes[i][0]][posicoes[i][1]] = 1;
    }

    // NAVIOS
    // Coloca os navios na horizontal e vertical
    int naviosHorizontalVertical[7][2] = {
        {2, 6}, {3, 6}, {4, 6}, {4, 1}, {4, 2}, {4, 3}, {4, 9}
    };
    for (int i = 0; i < 7; i++) {
        tabuleiro[naviosHorizontalVertical[i][0]][naviosHorizontalVertical[i][1]] = 3;
    }

    // Coloca os avios na diagonal
    int naviosDiagonal1[3][2] = {
        {5, 8}, {6, 7}, {6, 9}
    };
    int naviosDiagonal2[3][2] = {
        {7, 8}, {8, 7}, {9, 6}
    };
    int naviosDiagonal3[3][2] = {
        {7, 5}, {8, 4}, {9, 3}
    };
    for (int i = 0; i < 3; i++) {
        tabuleiro[naviosDiagonal1[i][0]][naviosDiagonal1[i][1]] = 3;
        tabuleiro[naviosDiagonal2[i][0]][naviosDiagonal2[i][1]] = 3;
        tabuleiro[naviosDiagonal3[i][0]][naviosDiagonal3[i][1]] = 3;
    }

    // Imprime o tabuleiro com todos os navios e áreas afetadas
    printf("\nTabuleiro final:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}