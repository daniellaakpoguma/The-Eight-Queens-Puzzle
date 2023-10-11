CC = gcc
CC_FLAGS =  -g  -ansi -pedantic -W -Wall

assign1: main.o printBoard.o modifyBoard.o checkBoard.o placeBoard.o
	$(CC) -g -o lab5 main.o  printBoard.o  modifyBoard.o checkBoard.o placeBoard.o $(CC_FLAGS)

main.o: main.c lab5.h
	$(CC) -c main.c  $(CC_FLAGS)

printBoard.o: printBoard.c lab5.h
	$(CC) -c printBoard.c  $(CC_FLAGS)

modifyBoard.o: modifyBoard.c lab5.h
	$(CC) -c modifyBoard.c  $(CC_FLAGS)

checkBoard.o: checkBoard.c lab5.h
	$(CC) -c checkBoard.c  $(CC_FLAGS)

placeBoard.o: placeBoard.c lab5.h
	$(CC) -c placeBoard.c  $(CC_FLAGS)