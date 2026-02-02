#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
//typedef 类型重命名
typedef unsigned int uint;

int main()
{
	unsigned int num1 = 0;
	uint num2 = 0;

	return 0;
}
*/


/*
//static 
//修饰局部变量，局部变量出了作用域不销毁 static修饰局部变量时，改变了变量的存储位置
//修饰全局变量
//修饰函数

//1.修饰局部变量
//int a = 1;
void test()
{
	static int a = 1;
		a++;
		printf("%d ", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}

	return 0;
}
*/


/*
//2. 修饰全局变量
//全局变量的外部链接属性，变成内部链接属性，其它源文件无法使用这个全局变量了
extern g_val
int main()
{
	printf("%d\n", g_val);

	return 0;
}
*/ 

//3.修饰函数
//与修饰全局变量类似，函数的外部链接属性变成了内部链接属性
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//
//
//	return 0;
//}


#define ADD(x,y) ((x)+(y))
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);
	printf("%d", c);


	return 0;
}