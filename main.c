#include <stdio.h>
#define size 8

void chess(char desk[size][size])
{
    for (int i = 0; i < size; i++) {
        printf("%d", size - i);
        for (int j = 0; j < size; j++) {
            printf(" %c", desk[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h");
}

int main()
{
    char desk[size][size]
            = {{'R', 'H', 'B', 'Q', 'K', 'B', 'H', 'R'},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
               {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
               {'R', 'H', 'B', 'Q', 'K', 'B', 'H', 'R'}};
    chess(desk);
    printf("\n R-rook,H-knight,B-Bishop,K-king,Q-queen,P-pawn");
}
