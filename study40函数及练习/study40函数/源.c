#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//素数判断：一个数x除了1和它本身外不能被任何数整除,x除以2~sqrt（x）的数如果都不为0，x就是素数（函数在73行）
//闰年判断：1.能被 4 整除，但不能被 100 整除 → 闰年
//         2.能被 400 整除 → 也是闰年

//1.用函数修改实际参数的时候，不能直接改，要用指针
//2.用函数传数组的时候，不能在函数里面求sz，要在外面求sz




//一.函数分类
//1.库函数：c语言里面自带的函数
// strcpy memset 头文件均为<string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "abcdef" };
//	strcpy(arr1,arr2);//把arr2复制给arr1
//	printf("%s", arr1);
//	return 0;
// }

//int main()
//{
//	char arr1[] = { "hello world" };
//	memset(arr1+6, 'x', 3);
//	printf("%s", arr1);
//	return 0;
//}

//2.自定义函数
//交换变量数值的函数

//x y是形式参数
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//修改形参不会影响实参

// 错误版本：
//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

// void Swap(int* x,int* y)
//{
//	int z = 0;
//	z = *x;//z=a
//	*x = *y;//a=b
//	*y = z;//b=a
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d b=%d\n", a, b);
//	//a b叫实际参数
//	Swap(&a,&b);
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}


//写一个函数判断一个数是不是素数
//#include <math.h>
//
//int prime_number(int x)
//{
//	
//	int flag = 1;
//	int i = 0;
//		for (i = 2; i <= sqrt(x); i++)//sqrt是数学库函数，开平方的意思，头文件<math.h>
//		{
//			if (x % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//	if (1 == flag)
//	{
//		printf("%d ", x);
//	}
//	else
//	{
//		printf("%d不是素数",x);
//	}
//	return flag;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//    prime_number(a);
//	return 0;
//}
//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = prime_number(i);
//		if (1 == j)
//		{
//			count++;
//		}
//	}
//	printf("\n%d",count);
//	return 0;
//}



//写一个函数，实现一个整型有序数组的二分查找

//找到了返回下标，没找到返回-1
int binary_search (int arr[],int y,int sz)
{
	int left = 0;
	int right = 0;
	int mid = 0;
	left = 0;
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < y)
		{
			left = mid + 1;
		}
		else if (arr[mid] > y)
		{
			right = mid - 1;
		}
		else if (arr[mid] == y)
		{
			return mid;
		}

	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	//找到了返回下标，没找到返回-1
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if (-1 == ret)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，下标是%d", ret);
	}

	return 0;
}

