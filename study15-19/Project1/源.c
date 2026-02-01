#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	double a = 7 / 2.0;
//	//除号两端都是整型的时候，执行的是整数除法，当两端有一个浮点型的时候执行的是浮点数的除法
//	int b = 7 % 2;//取余
//    //取余两端只能是整数
//	printf("%.1f %d", a, b);
//	//.1f的意思是小数点后保留一位
//
//
//	return 0;


//c语言中
//0表示假
//非0表示真
//int main()
//{
	/*
	int a = 0;
	if (!a)  //if只执行真命题，遇到假命题自动跳过
	{
		printf("hehe\n");
	}
	*/

	/*
	//sizeof是操作符，是单目操作符,计算结果的单位是字节
	printf("%d\n", sizeof(int));//4 (int类型4个字符)
	printf("%d\n", sizeof(a));//4 (a是int类型的所以也是4个字符)
	printf("%d\n", sizeof a );//a的括号可省去，int括号不可省去

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40 (arr是整型数组，有10个数，每个数大小都是4字节，所以10×4=40)
	printf("%d\n", sizeof(arr[0]));//4 arr[0]是数组arr[]中的第一个元素
	printf("%d\n", sizeof(arr)/ sizeof(arr[0]));//10 数组元素个数
	*/


	/*
	int a = 10;

	int b = a++;//后置++ 先使用，后++
	            //int b=a；a=a+1；
	printf("%d\n", a);
	printf("%d\n", b);

	int b = ++a;//前置++ 先++后使用
	printf("%d", b);
	*/


	//int a = (int)3.14;
	//printf("%d", a);//3


	//&&逻辑与---并且
	//||逻辑或---或者
	//int a = 10, b = 20;
	//if (a && b)//a,b都真才行
	//{
	//	printf("hehe\n");

	//}
	//if (a || b)//a,b有一个真就行
	//{
	//	printf("xixi\n");
	//}


//	return 0;
//}

//int main()
//{
//	int a, b, r;
//	scanf("%d %d", &a, &b);
//	r = a > b ? a : b;
//	printf("%d",r);
//
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
  //        c=8   a=28  c=5
	int r =(c=a-2,a=b+c,c=c-3);//逗号表达式从左向右依次计算，整个表达式的结果是最后一个式子的结果
	printf("%d %d %d", a, b, c);

}