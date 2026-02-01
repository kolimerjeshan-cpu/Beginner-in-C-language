#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}


int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int r = Max(a, b);
	printf("%d", r);


	return 0;
}

//int main()
//{
//	int x, y;
//	printf("ÇëÊäÈëxµÄÖµ\n");
//	scanf("%d", &x);
//	if (x == 0)
//	{
//		y = 0;
//	}
//	else
//	{
//		if (x > 0)
//		{
//			y = -1;
//		}
//		else
//		{
//			y = 1;
//		}
//	}
//
//	printf("%d\n", y);
//
//
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[6] = {'a','b','c','d','e','f'};
//	char arr3[7] = {'a','b','c','d','e','f'};
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//
//	return 0;
//}