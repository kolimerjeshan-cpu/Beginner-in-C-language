#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int k = 0;
	printf("--------------------\n");
	for (k = 0; k <= row; k++)
	{
		if (0 == k)
		{
			printf("  ");
		}
		else printf("%d ", k);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");
}

//0不是雷
//1是雷
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		//x:1~row
		//y:1~col
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (i == 0 && j == 0)
			{
				continue;
			}
			count = count + mine[x + i][y + j] - '0';
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	int win = 0;
	while (win<ROW*COL-EASY_COUNT)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '#')
			{
				printf("该坐标已经排查过，请重新输入\n");
			}
			else 
			{
				//如果是雷
				if (mine[x][y] == '1')
				{
					printf("很遗憾，雷爆炸了\n");
					show[x][y] = '*';
					DisplayBoard(show, ROW, COL);
					printf("\n");
					break;
				}
				//如果不是雷
				else
				{
					win++;
					count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					if (win < ROW * COL - EASY_COUNT)
					{
						DisplayBoard(show, ROW, COL);
					}
				}
			}
			
		}
		else printf("输入非法，请重新输入\n");
	}

	if (win == ROW * COL - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
		DisplayBoard(show, ROW, COL);
	}
}
