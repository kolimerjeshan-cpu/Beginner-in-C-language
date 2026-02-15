#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//最大公约数 * 最小公倍数=原两个数相乘

//最大公约数求法：1.暴力求解 2.辗转相除



//int main()//default和case一样只是switch的入口
//{
//	int a = 1;
//	switch (a)//a只能是整型表达式，int char long short 都可以
//	{
//	case 1:
//		printf("hehe\n");
//	default:
//		printf("111\n");
//	case 2:
//		printf("haha\n");
//	}
//	return 0;
//}



//##写代码，让三个数从大到小输出
//void Swap(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 < num2)
//	{
//		Swap(&num1, &num2);
//	}
//	if (num1 < num3)
//	{
//		Swap(&num1, &num3);
//	}
//	if (num2 < num3)
//	{
//		Swap(&num2, &num3);
//	}
//	printf("%d %d %d", num1, num2, num3);
//	return 0;
//}


//##求两个数最大公约数

//方法一：暴力求解法
//int Gcd(int x, int y)
//{
//	int min = 0;
//	min = x < y ? x : y;
//	int m = min;
//	while (1)
//	{
//		if (x % m == 0 && y % m == 0)
//			break;
//		m--;
//	}
//	return m;
//}

//方法二：辗转相除法
//int Gcd(int x,int y)
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	a = x;
//	b = y;
//	while (1)
//	{
//		c = a % b;
//		if (0 == c)
//			break;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int ret = Gcd(num1, num2);
//	printf("%d", ret);
//	return 0;
//}
void Jiujiu()
{
	int i = 0;
	//i:行
	for (i = 1; i < 10; i++)
	{
		int j = 0;
		//j:列
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j,i*j );
		}
		printf("\n");
	}

}


int main()
{
	Jiujiu();
	return 0;
}