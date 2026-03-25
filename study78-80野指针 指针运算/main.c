#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	//野指针
//	int* p;
//	*p = 10;
//
//	return 0;
//}
int main()
{
	int arr[10] = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 1;
	}

	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		*p = 1;
		p++;
	}

	for (i = 0; i < sz; i++)
	{
		*(p + i) = 1; 
	}


	return 0;
}