#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*int main()
{
	int a = 10;//向内存申请4个字符，存储10
	//&a取地址操作符
	int* p = &a;
	//p就是指针变量
	//char ch = 'w';
	//char* p = &ch;
	printf("%p\n", &a);
	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指的对象，*p就是p所指的对象
	printf("%d\n", a);

	return 0;
}
*/



struct Stu//定义一个结构体
{
	char name[20];
	int  age;
	char sex[10];
	char tale[12];

};
void print(struct Stu* x)//定义一个函数
{
	printf("%s %d %s %s\n", (*x).name, (*x).age, (*x).sex, (*x).tale);
	printf("%s %d %s %s\n", x->name, x->age, x->sex, x->tale);
}


int main()//主函数
{
	struct Stu s = { "zhangsan",18,"male","18877776666" };
	//printf("%s %d %s %s", s.name, s.age, s.sex, s.tale);
	struct Stu* p = &s;
	print(p);

	return 0;
}