#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	//while循环中的
	//break是用于永久的终止循环
	//continue是跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断

	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;
		printf("%d\n", i);
		i++;
	}

	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;
		printf("%d\n", i);
		i++;
	}


	return 0;
}
*/

/*
//getchar() 头文件:<stdio.h> 获取一个字符的ASCII码
//putchar() 头文件:<stdio.h> 打印一个值表示的字符
int main()
{
	int ch = getchar();
	printf("%d\n%c\n", ch, ch);//%c表示以字符形式输出
	putchar(ch);
	

	return 0;
}
*/

/*
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	
	//清理输入缓冲区
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认密码(Y/N):>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("密码输入成功");
	}
	else if ('N' == ret)
	{
		printf("请重新输入密码");
	}
	else printf("系统错误");

}
*/
/*
int main()
{
	char password[20] = { 0 };
	int ret = 'N';
	printf("请输入密码:>");
	while ('N' == ret)
	{
		scanf("%s", password);

		//清理输入缓冲区
		int ch = 0;
		while ((ch = getchar()) != '\n')
		{
			if (' ' == ch)
			{
				printf("密码不能包含空格");
				break;
		    }
		}
		if (' ' == ch)
		{
			break;
		}


		printf("请确认密码(Y/N):>");
		 ret = getchar();
		if ('Y' == ret)
		{
			printf("密码输入成功 ");
			printf("您的密码是:%s", password);
		}
		else if ('N' == ret)
		{
			printf("请重新输入密码:>");
		}
		else printf("系统错误");
	}
}
*/



//int main()
//{
//	int year;
//	int mouth;
//	int date;
//	scanf("%4d%2d%2d", &year, &mouth, &date);
//	printf("year=%d\n", year);
//	printf("mouth=%02d\n", mouth);
//	printf("date=%d\n", date);
//	
//	return 0;
//}

//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	int j = 0;
//	int max = 0;
//
//	while (i < 4)//录入
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	max = arr[0];
//	while (j < 4)//找最大值
//	{
//		if (arr[j] > max)
//		{
//			max = arr[j];
//		}
//		j++;
//	}
//	printf("%d",max);
//	return 0;
//}

int main()
{
	int max = 0;
	int i = 1;
	int n = 0;
	scanf("%d", &max);
	while (i < 4)
	{
		scanf("%d", &n);
		if (n > max)
		{
			max = n;
		}
		i++;
	}
	printf("%d", max);
	return 0;
}