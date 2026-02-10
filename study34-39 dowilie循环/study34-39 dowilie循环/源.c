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



//if (srecmp(passward, "abcdef") == 0)  判断两个字符串是否相等不能用==，应该用库函数strcmp，返回值如果为0则二者相等 头文件<string.h>
//int main()
//{
//	char passward[20] = {0};
//	char ture[] = {"abcdef"};
//	int sz = 0;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//	sz = sizeof(ture) / sizeof(ture[0]);
//
//
//	printf("请输入密码\n");
//	for (i = 0; i < 3; i++)
//	{
//		
//		scanf("%s", passward);
//		j = 0;
//		while ( j <= (sz - 2))
//		{
//			if (ture[j] != passward[j])
//			{
//				printf("密码错误,");
//				if (2 != i)
//				printf("请重新输入密码\n");
//				break; 
//			}
//			j++;
//		}
//		if (sz - 1 == j)
//		{
//			printf("密码正确\n");
//			break;
//		}
//	}
//	if (3 == i)
//	{
//		printf("次数已用尽，请明天再来\n");
//	}
//	return 0;
//}




//猜数字游戏，电脑产生一个随机数，反馈猜大了还是猜小了


#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("                 \n");
	printf("      1.play     \n");
	printf("      0.exit     \n");
	printf("                 \n");
}

void game()
{
	//1.生成随机数
	//rand是生成随机数的函数，头文件：<stdlib.h>
	//rand输出的顺序是一定的，可以用srand控制rand输出的起点，srand括号里的值要是一个随机数，就可以保证
	//rand输出的是随机数 srand头文件也是<stdlib.h>
	//time()返回值是时间戳，类型是time_t 也就是long long型的 头文件<time.h>
	//srand 期望的参数是unsigned int 类型的所以需要强制转换一下
	//srand((unsigned int)time(NULL));需要把这行代码移到主函数里，也就是确定一次rand的起点
	//srand确定rand的起点，srand改变很少，对应的rand的值也改变很少
	int ret = rand() % 100 + 1;//rand随机的数字是0~32767，%100之后变成0~99，+1之后变成1~100
		printf("%d\n", ret);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}


	} while (input);

	return 0;
}


