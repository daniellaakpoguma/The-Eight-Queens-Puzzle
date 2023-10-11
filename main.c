/* Student Name: Oghenerukevwe Akpoguma
* Student Number: 041075624
* Course: 23S_CST8234
* Declaration: This is my own original work except where sources have been cited.
*/

#include <stdio.h>
#include "lab5.h"
#define N 8

int main(){
    /* creation of chessboard array */
    char chessBoard [N][N];
    int i, j;
     int solutionFound;

    /* filling the array with spaces */ 
    for ( i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            chessBoard[i][j] = ' ';
        }
    }
  
    /*Call the recursive function to place queens starting from the first column
    */ 
    solutionFound = placeQueen(0, 0, chessBoard);

    /*Print the result
    */ 
    if (solutionFound) {
        printBoard(chessBoard);
    } else {
        printf("No solution found.\n");
    }
    
    return 0;
}

