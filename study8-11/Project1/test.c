#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	char ch = 'w';
//	//char字符类型 ch字符变量  'w'字符
//	//"abcdef"字符串
//	//字符串结束标志是\0=0
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f','/0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	
//	
//	return 0;
//}



//%d打印整数
//%c打印字符
//%s打印字符串
//%f打印float类型的数据（小数）
//%lf打印double类型的数据
//%zu打印sizeof的返回值
int main()
{
	printf("abc\n");
	printf("abc\0def");
	printf("are you ok\?\?)\n");
	printf("%c\n", '\'');
	printf("abcdef\n");
	printf("%s\n", "abcdef");
	printf("\"\n");
	printf("abc\\0def");//第一个斜杠不让第二个斜杠成文转义字符
	printf("\a\n");
	printf("%c\n",'\130');
	printf("%c\n",'\x30');
	printf("%d\n",strlen("c:\test\628\test.c"));






	return 0;
}

