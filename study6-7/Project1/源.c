#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//extern int a; 
//int main() 
//{
//	{
//		printf("%d\n", a);
//
//	}
//	printf("%d\n", a);
//	return 0;
//}




//常量：
//1.字面常量
// 30 3.14 'w' 'abc'
// 
//2.const修饰的常变量
// const int a = 10;
// const修饰后a这个变量就不能改了 被修饰的a，本质是变量，但不能被修改，有常量的属性。
// 
//3. define 定义的标识符常量
// 
//4.枚举常量


//#include <stdio.h>
//int main()
//{
	//const int n = 10;
	//int arr[n] = { 0 };
	// 被const修饰后也是变量

//	return 0;
//}


#define MAX 100
#define STR "abcdef"
int main() 
{
	printf("%d\n", max);
	int a = max;
	printf("%d\n", a);
	printf("%s\n", str);
	

	return 0;
}
enum Sex
{
	//枚举常量
	MALE,
	FEMALE,
	SECRET
};