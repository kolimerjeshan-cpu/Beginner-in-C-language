#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
/*
int main()
{
	int i = 1;
	do
	{
		if (5 == i)
		{
			continue;//在dowhile循环中 continue 跳过后两句代码，直接到while
			//break; 
		}
		printf("%d\n",i);
		i++;
	}
	while(i<=10);

	return 0;
}
*/


//计算n的阶乘
// 
// 
// 方法一
//int main()
//{
//	int ret = 1;
//	int n = 0;
//
//	scanf("%d",&n);
//	ret = n;
//	while (1 < n)
//	{
//		n--;
//		ret = ret*n;
//
//	}
//	printf("%d", ret);
//	return 0;
//}

//方法二
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//}

//计算1!+2!+3!.......+10!
// 
// 
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	int n1 = 0;
//	scanf("%d", &n);
//	for (n1 = 1; n1 <= n; n1++)
//	{
//		ret = 1;
//		for (i = 1; i <= n1; i++)
//
//		{
//			ret = ret * i;
//
//		}
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//}

//优化后的
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			sum = sum+ret;
//		}
//	printf("%d", sum);
//}


//从有序数组中查找某个数字n

//法一
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;


	int i = 0;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		if(arr[i]==k)
		{
			printf("找到了，下标为%d", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到");
	}

	return 0;
}
*/
//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,100 }; 
//	int sz = (sizeof(arr)) / (sizeof(arr[10]));
//	int k = 99;
//	int i = 0;
//
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//
//	left = 0;
//	right = sz - 1;
//	while(left<=right)
//	{
//		
//		mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] = k)
//		{
//			i = mid;
//			printf("找到了，下标是%d", i);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//
//	return 0;
//}


int main()
{
	int sz = 0;
	int left = 0;
	int right = 0;

	char arr1[] = { "welcome to bit!!!!" };
	char arr2[] = { "                  " };
	sz = sizeof(arr1) / sizeof(arr1[0]);
	left = 0;
	//right = sz - 2;
	right = strlen(arr1) - 1;
	while (left < right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);//延时函数
		system("cls");//清空屏幕
	}


	
	return 0;
}