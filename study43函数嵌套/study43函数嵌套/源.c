#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//函数的嵌套
//函数可以嵌套调用，但不能嵌套定义
//void new_line()
//{
//	printf("hehe\n");
//}
//
//void three_line()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//链式访问
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}