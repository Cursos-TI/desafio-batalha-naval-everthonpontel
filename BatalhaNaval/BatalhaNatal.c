#include <stdio.h>

int main() {
    int tabuleiro[5][5];

    tabuleiro[1][1] = 1;
    tabuleiro[1][2] = 1;
    tabuleiro[1][3] = 1;
    tabuleiro[3][3] = 2;
    tabuleiro[4][3] = 3;
    
    //navio HORIZONTAL
    
    printf("NAVIO VERTICAL\n");
    
    printf("NAVIO 1 posiçao:[1] [1]\n");
    printf("NAVIO 1 posiçao:[1] [2]\n");
    printf("NAVIO 1 posiçao:[1] [3]\n");

    //navio VERTICAL
    printf("NAVIO VERTICAL\n");

    printf("NAVIO 2 posiçao:[1] [3]\n");
    printf("NAVIO 2 posiçao:[3] [3]\n");
    printf("NAVIO 2 posiçao:[4] [3]\n");

}