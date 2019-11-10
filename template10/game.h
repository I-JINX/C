
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS (ROW+2)
#define COLS (COL+2)
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char mine[ROW][COL], int row, int col);
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col);