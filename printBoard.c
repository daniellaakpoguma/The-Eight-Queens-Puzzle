#include <stdio.h>
/* Student Name: Oghenerukevwe Akpoguma
* Student Number: 041075624
* Course: 23S_CST8234
* Declaration: This is my own original work except where sources have been cited.
*/
#define N 8
int i, j;

void printBoard(char chessBoard[][N]) {
    for ( i = 0; i < N; i++) {
        /* Print horizontal line */ 
        printf("+");
        for (j = 0; j < N; j++) {
            printf("---+");
        }
        printf("\n");

        /* Print array contents and vertical lines */
        for ( j = 0; j < N; j++) {
            printf("| %c ", chessBoard[i][j]);
        }
        printf("|\n");
    }

    /* Print the last horizontal line after all rows are printed */
    printf("+");
    for ( j = 0; j < N; j++) {
        printf("---+");
    }
    printf("\n");

}