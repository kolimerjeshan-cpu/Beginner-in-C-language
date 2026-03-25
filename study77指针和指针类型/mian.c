#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0x11223346;
//	printf("%d", *pa);
//
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	int* pi = &a;
	char* pc = &a;
	printf("%p\n", pi+1);
	printf("%p\n", pc+1);
	return 0;
}