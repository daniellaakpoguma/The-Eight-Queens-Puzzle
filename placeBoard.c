#include "lab5.h"
/* Student Name: Oghenerukevwe Akpoguma
* Student Number: 041075624
* Course: 23S_CST8234
* Declaration: This is my own original work except where sources have been cited.
*/
#define N 8

int placeQueen(int row, int column, char chessBoard[][N]) {
    int i; 

    if (column >= N) {
        return 1;
    }

    /*Try placing a queen in each row of the current column, starting from the specified row
    */ 
    for (i = row; i < N; i++) {
        if (checkBoard(i, column, chessBoard)) {
            /*/ Place the queen
            */
            modifyBoard(1, i, column, chessBoard); 

            /*Recursively place queens in the next row of the same column
            */ 
           /*Move to the next column and start from row 0
           */
            if (placeQueen(0, column + 1, chessBoard)) { 
                return 1;
            }

            /*
            If placing the queen in the current row doesn't lead to a solution, backtrack
            */
           /* Remove the queen
           */
            modifyBoard(0, i, column, chessBoard); 
        }
    }

    /*If no queen can be placed in the current column, return false*/ 
    return 0;
}




