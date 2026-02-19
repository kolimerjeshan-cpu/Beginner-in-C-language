#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组名确实能表示首元素地址，但有两个例外
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2. &数组名,这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	//printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	printf("%p\n", &arr+1);
//
//	int arr1[3][4] = { 0 };
//	arr1;//二维数组的数组名也表示首元素的地址（需要把二维数组想象成一维数组），实际上表示的是第一行的地址
//	return 0;
//}




//求二维数组有多少行多少列
int main()
{
	int arr[3][4] = { 0 };
	//行：
	int sz1 =sizeof(arr) / sizeof(arr[0]);//总大小除以一行大小
	//列：
	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);//一行的大小除以一个元素的大小
	printf("%d\n%d", sz1, sz2);
}