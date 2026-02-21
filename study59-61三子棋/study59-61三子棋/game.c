#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"


//初始化棋盘
void Initboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{

			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void Displayboard(char board[ROW][COL],int row ,int col )
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)//打印数据
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}

			printf("\n");

			if (i < row - 1)//打印分割行
			{
				for (k = 0; k < col; k++)
				{
					printf("---");
					if (k < col - 1)
						printf("|");
				}
				printf("\n");
			}
		
	}
}

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	printf("请选择：>\n");
	

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else printf("此位置已有棋子，请重新输入\n");
		}
		else printf("输入非法，请重新输入\n");
	}


}

//电脑下棋
//找没下棋的位置，随机下
void Computermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
}


//玩家赢——'#'
//电脑赢——'*'
//平局——'Q'
//继续——'C'
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int hang = 0;
	int lie = 0;
	int line = 0;
	int k = 1;
	//行
	/*for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col-1; j++)
		{
			if (board[i][j] != board[i][j + 1] || board[i][0] == ' ')
			{
				hang = 1;
			}
		}
		if (0 == hang)
			return board[i][0];
	}
	
	//列
	/*for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}*/
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] != board[i+1][j] || board[0][j] == ' ')
			{
				lie = 1;
			}
		}
		if (0 == lie)
			return board[0][j];
	}

	//对角线
	/*if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}*/
	for (k = 0; k < col-1; k++)
	{
		if (board[k][k] != board[k + 1][k + 1]||board[k][k]==' ')
			line = 1;
	}
	if (line == 0)
		return board[0][0];

	//没有人赢,判断平局
	k = 1;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				k = 0;
			}
		}
	}
	if (0 != k)
		return 'Q';
	//继续
	return 'C';
}

void Game()
{
	char ret = 'C';
	char board[ROW][COL] = {0};
	//初始化棋盘的函数
	Initboard(board, ROW, COL);
	//打印棋盘的函数
	Displayboard(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);//玩家下棋
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		
		Computermove(board,ROW,COL);//电脑下棋
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("玩家赢\n");
	}
	else if (ret == '*')
	{
		printf("电脑赢\n");
	}
	else printf("平局\n");
}