#ifndef __GAME_H__
#define __GAME_H__

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3


//数组初始化
void Initboard(char board[ROW][COL], int row, int col);
//打印
void Displayboard(char board[ROW][COL],int row,int col);
//玩家下棋
void Playermove(char borad[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//判断输赢
char Iswin(char board[ROW][COL],int row, int col);




void Game();

#endif