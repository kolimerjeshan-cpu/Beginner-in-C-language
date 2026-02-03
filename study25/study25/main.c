#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int age = 20;
//  if (age > 18)
// {
//		printf("成年\n");
// }
//  else
// {
//	  printf("未成年\n");
// }
//
//	int age;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("青少年");
//	}
//	else if (18 <= age && age < 28)
//	{
//		printf("青年");
//	}
//	else if (28 <= age && age < 40)
//	{
//		printf("壮年");
//	}
//	else if (40 <= age && age < 60)
//	{
//		printf("中年");
//	}
//	else if (60 <= age && age < 100)
//	{
//		printf("老年");
//	}
//	else if (age >= 100)
//	{
//		printf("老寿星");
//	}
//	
//	return 0;
//} 


//int main()//判断一个数是奇数还是偶数
//{
//	int num1 = 0;
//	int r = 0;
//	scanf("%d", &num1);
//	r = num1 % 2;
//	if (1 == r)
//	{
//		printf("该数为奇数");
//	}
//	if(0 == r)
//	{
//		printf("该数为偶数");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int r = 0;
//	while (i < 101)
//	{
//		r = i % 2;
//		if (1 == r)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)//case是switch语句的入口 switch括号里只能是整数型，case后的数字也只能是整数型，不能是变量，但可以是字符（字符本质上也是整数型）
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//	break;
//	case 7 :
//		printf("星期日");
//	break;
//	}
//
//	return 0;
//}

int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday");
		break;
	case 6:
	case 7:
		printf("weekend");
		break;
	default:
		printf("请输入正确的数字");
	}

	return 0;
}