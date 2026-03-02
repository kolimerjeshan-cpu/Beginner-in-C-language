#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//递归打印每一位(正序)
void print1(int x)
{
	if (0 == x / 10)
	{
		printf("%d ", x);
	}
	else
	{
		print1(x / 10);
		printf("%d ", x % 10);
	}
	
}
//打印每一位（倒序）
void print2(int x)
{
	while (x>0)
	{
		printf("%d ", x % 10);
		x = x / 10;
	}
}
//数组逆置（循环也就是迭代）
void reverse_string1(char arr[])
{
	int sz = strlen(arr);
	char tmp = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0' )
	{
		count++;
		str++;
	}
	return count;
}

//数组逆置（递归）
//逆序a b c d e f g 可以看成  交换a与g再逆序b c d e f
void reverse_string2(char* str)
{
	char tmp = *str;

	int len = my_strlen(str);
	*str = *(str + len - 1);

	*(str + len - 1) = '\0';
	if (strlen(str + 1) > 1)
	{
		reverse_string2(str + 1);
	}

	*(str + len - 1) = tmp;


}

//计算一个数的每位之和
int Digitsum(int x) 
{
	int sum = 0;
	sum = sum + x % 10;
	if (x / 10 != 0)
	{
		return sum + Digitsum(x / 10);
	}
	else return sum;
}

//int main()
//{
//	//int num = 0;
//	//scanf("%d", &num);
//	
//	//char arr[] = "abcdefg";//a,b,c,d,e,f,/0
//	////reverse_string1(arr);
//	//reverse_string2(arr);
//	//printf("%s", arr);
//
//	int sum = Digitsum(1729);
//	printf("%d", sum);
//
//	return 0;
//}

//编写一个函数实现n的k次方
double Pow(int x, int y)
{
	int tmp = 1;
	if (y ==0)
		return 1;
	if (y > 0)
	{
		return x * Pow(x,y - 1);
	}
	if (y < 0)
	{
		return 1.0 / Pow(x, -y);
	}
	
}
int main()
{
	int n = 2;
	int k = -2;
	double ret = Pow(n, k);

	printf("%f", ret);


	return 0;
}
