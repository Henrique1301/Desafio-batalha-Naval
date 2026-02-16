#include <stdio.h>

#define Linhas 10
#define Colunas  10

int navio1 = 0;

int main(){

    int tabuleiro [Linhas][Colunas]; 

    int soma = 0;
    
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < Linhas; i++)
    {
        printf("%d  ",i+1);
        for (int j = 0; j < Colunas; j++)
        {
            soma = 0;
            int navio = 3;
            tabuleiro [Linhas][Colunas]= soma;
            
            //Definindo navios horizontal
            if (i == 5 && j == 2 || i == 6 && j == 2 || i == 7 && j == 2)
            {
                tabuleiro [Linhas][Colunas] = navio;
            }

            //definindo navio vertical
            if (i == 0 && j == 3 || i == 0 && j == 4 || i == 0 && j == 5)
            {
                tabuleiro [Linhas][Colunas] = navio;
            }

            //definindo navio horizontal (esquerda para direita)
             if (i == 5 && j == 5 || i == 6 && j == 6 || i == 7 && j == 7)
            {
                tabuleiro [Linhas][Colunas] = navio;
            }

            //definindo navio horizontal (direita para esquerda)
             if (i == 0 && j == 9 || i == 1 && j == 8 || i == 2 && j == 7)
            {
                tabuleiro [Linhas][Colunas] = navio;
            }
            
            printf("%d ", tabuleiro[Linhas][Colunas]);
        }
        printf("\n");
    }



    return 0; 
}