#include <stdio.h>

int main(){

    int tabuleiro [10][10] = {
    {0,0,0,3,3,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,3,0,0,0,0},
    {0,0,0,0,0,3,0,0,0,0},
    {0,0,0,0,0,3,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
    };


    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d %d %d %d %d %d %d %d %d %d %d\n", i, tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2], tabuleiro[i][3], tabuleiro[i][4], tabuleiro[i][5], tabuleiro[i][6], tabuleiro[i][7], tabuleiro[i][8], tabuleiro[i][9]);
    }


    return 0; 
}