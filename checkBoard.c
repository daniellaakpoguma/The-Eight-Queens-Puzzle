/* Student Name: Oghenerukevwe Akpoguma
* Student Number: 041075624
* Course: 23S_CST8234
* Declaration: This is my own original work except where sources have been cited.
*/

#define N 8

int checkBoard(int row, int column, char chessBoard[][N]){
    int rowCount = 0;
    int validRow = 0;
    int col, r, i, j;
    int columnCount = 0;
    int validColumn = 0;
    int upperLeftDiagonalCount = 0;
    int upperRightDiagonalCount = 0;
    int lowerLeftDiagonalCount = 0;
    int lowerRightDiagonalCount = 0;
    int validDiagonal; 

    for ( col = 0; col < N; col++) {
        if (chessBoard[row][col] == 'Q') {
            rowCount++;
        }
    }
    if(rowCount == 0){
        validRow  =1;
    }

    /*
    *check for Qs in columns
    */
 
    for (r = 0; r < N; r++) {
        if (chessBoard[r][column] == 'Q') {
            columnCount++;
        }
    }
    if(columnCount == 0){
        validColumn  =1;
    }

    /*
    * check for Qs in diagonal
    */
  
    /* Check the upper-left diagonal
    */
    for (i = row - 1, j = column - 1; i >= 0 && j >= 0; i--, j--) {
        if (chessBoard[i][j] == 'Q') {
           upperLeftDiagonalCount++ ;
        }
    }
    
    /*
    Check the upper-right diagonal
    */
    for (i = row - 1, j = column + 1; i >= 0 && j < N; i--, j++) {
        if (chessBoard[i][j] == 'Q') {
            upperRightDiagonalCount++;
        }
    }

    /* Check the lower-left diagonal
    */
    for ( i = row + 1, j = column - 1; i < N && j >= 0; i++, j--) {
        if (chessBoard[i][j] == 'Q') {
            lowerLeftDiagonalCount++;
        }
    }

    /*
    Check the lower-right diagonal
    */
    for ( i = row + 1, j = column + 1; i < N && j < N; i++, j++) {
        if (chessBoard[i][j] == 'Q') {
            lowerRightDiagonalCount++;
        }
    }

    validDiagonal = (upperLeftDiagonalCount == 0) && (upperRightDiagonalCount == 0) && (lowerLeftDiagonalCount == 0) && (lowerRightDiagonalCount == 0);

    if (validColumn && validRow && validDiagonal){
        return 1;
    }else{
        return 0;
    }
}