#ifndef LAB5_H
#define LAB5_H
/*Define the size of the chessboard*/
#define BOARD_SIZE 8 

void printBoard(char chessBoard[][BOARD_SIZE]);
void modifyBoard(int placeOrRemove, int row, int column, char chessBoard[][BOARD_SIZE]);
int placeQueen(int row, int column, char chessBoard[][BOARD_SIZE]);
int checkBoard(int row, int column,  char chessBoard[][BOARD_SIZE]);

#endif 
