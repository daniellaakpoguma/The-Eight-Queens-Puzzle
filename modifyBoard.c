/* Student Name: Oghenerukevwe Akpoguma
* Student Number: 041075624
* Course: 23S_CST8234
* Declaration: This is my own original work except where sources have been cited.
*/
#define N 8

void modifyBoard(int placeOrRemove, int row, int column, char chessBoard[][N]){
    /*checks for if you want to place Q on the board 
    */ 
    if (placeOrRemove == 1){
        chessBoard[row][column] = 'Q';
    }else if (placeOrRemove == 0){
        chessBoard[row][column] = ' ';
    }
}