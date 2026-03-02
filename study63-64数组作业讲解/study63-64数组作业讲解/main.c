#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



//init初始化数组全为0
//print打印数组每个元素
//reverse完成每个元素的逆置
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int* str,int sz)
{
	int tmp = *str;
	*str = *(str + sz - 1);
	*(str + sz - 1) = tmp;
	if (sz >= 2)
	{
		reverse(str + 1, sz - 2);
	}
}
int main()
{
	int arr[] = {1,3,5,7,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	print(arr, sz);
	int arr1[] = { 1,3,5,7,9 };
	reverse(arr1,sz);
	print(arr1, sz);

	
}