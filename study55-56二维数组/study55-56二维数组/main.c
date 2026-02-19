#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//二维数组

//1.创建
//int arr1[3][4];//三行四列
//char arr2[5][6];

//2.初始化
//int arr1[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };//先找四个给第一行，再找四个给第二行，以此类推
//int arr2[3][4] = { 1,2,3,4,2,3,4,5,3,4 };//不够补0
//int arr3[3][4] = { {1,2},{3,4}, {5, 6} };//1,2 放在第一行 3,4 放在第二行 4,5放在第三行
//int arr4[][4] = { {1,2,3,4},{5,6} };//只可以省略行不可以省略列
//int arr5[][4] = { 1,2,3,4,5,6 };


//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3.数组越界
//数组越界时，编译器不会报错，但这是错的


//4.冒泡排序
void Bubble_sort(int arr[],int sz)
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//交换
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}
}

int main()
{
	int arr[] = { 9,8,6,7,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	Bubble_sort(arr,sz);

	int i = 0;
	for(i=0;i<sz;i++)
	printf("%d ", arr[i]);
	return 0;
}