#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	
	for(i=0;i<rows;i++)
	{
		for (j = 0;j<cols;j++)
		{
			board[i][j] = set;
		}
	}
	//memset(
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------------------------");
	for(i=0;i<=col;i++)
	{
		printf("%d ", i);
	}printf("\n");

	
	for(i=1;i<=row;i++)
	{
		printf("%d ", i);
		for (j = 1;j<=col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n"); 
	}printf("----------------------------");
}
void SetMine(char mine[ROW][COL], int row, int col)
{
	int count = 10;
	while(count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if(mine[x][y]=='*')
		{
			mine[x][y] = '1';
			count--; 
		}
	}
}
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x - 1][y-1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROW][COL], char show[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{	
	printf("请输入要排查的坐标\n");
	scanf("%d%d", &x, &y);
	if(x>=1 && x<=row && y>=1 && y<=col)
	{if(mine[x][y]=='1')
	{
		printf("被炸死了\n");
		DisplayBoard(mine, row, col);
		break;
	}else
	{
		int count = GetMine(mine, x, y);
		show[x][y] = count + '0';
		DisplayBoard(show, row, col);
	}
	}
	else
	{
		printf("坐标非法,请重新输入！\n");
	}
	
	}
}