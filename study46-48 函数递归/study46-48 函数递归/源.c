#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归两个必要条件
//1.存在限制条件，当满足这个条件的时候，递归便不再进行
//2.每次递归调用之后越来越接近这个限制条件

//写递归前，先推递推公式
//如：n>2: Fin(n)=Fin(n-1)+Fin(n-2) n<=2:Fin(n)=1

//##写一个函数实现打印每一位数字

//p(123) 4
//p(12) 3 4
//p(1) 2 3 4
//1 2 3 4

//void print(unsigned int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	//%u打印无符号的整数，%d打印有符号的整数
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}


//##写一个不创建临时变量的函数，求字符串长度

//创建临时变量
//int my_strlen(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}

//不创建临时变量
//int my_strlen(char* x)//'abc' --> 1+'bc' --> 1+1+'c' --> 1+1+1
//{
//	if (*x != '\0')
//	{
//		return 1 + my_strlen(x + 1);
//	}
//	else return 0;
//}
//
//int main()
//{
//	char arr[] = {"abcd"};
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}


//##n的阶乘

//int fac(int x)
//{
//	if (x > 1)
//	{
//		return x * fac(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fac(num);
//	printf("%d", ret);
//}


//##求第n个斐波那契数列

//递归
//int Fin(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fin(n - 1) + Fin(n - 2);
//	}
//}

//迭代
int Fin(int x)
{
	int i = 3;
	int n1 = 1;
	int n2 = 1;
	int ret = 1;
	if (x <= 2)
	{
		return 1;
	}
	if (x > 2)
	{
		while (i <= x)
		{
			ret = n1 + n2;
			n1 = n2;
			n2 = ret;
			i++;
		}
		return ret;
	}
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = Fin(n);
	printf("%d", ret);
	return 0;
}


