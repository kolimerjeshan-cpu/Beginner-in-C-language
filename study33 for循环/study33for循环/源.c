#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int i = 0;
	for (i = 1; i <= 10; i++)//不可在for循环里面修改循环变量
	{	                     //for循环的控制变量尽量采取前闭后开区间的写法
		if (5 == i)
		{
			continue;
		}
		printf("%d\n", i);
	}
	*/

	/*
	for (;;)//for循环判断部分省略意味着判断会恒成立
	{
		printf("hehe\n");
	}
	*/

	/*
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (; j < 3; j++)//只打印3次
		{
			printf("hehe\n");
		}
	}
	*/

	int j = 0;
	int k = 0;
	for (j = 0, k = 0; k = 0;k++)//循环不执行，因为判断部分k=0是赋值，且赋值为0是假
	{
		printf("hehe\n");
	}

	return 0;
}