#define  _CRT_SECURE_NO_WARNINGS
//逻辑与&& 逻辑或||
// &&左边为假右边就不计算了
// ||左边为真右边就不计算了

//要区分 逻辑与和按位与
//		逻辑或和按位或
//int a = 3;
//int a = 0;
//int c = a && b;此时c=0 并且
//int c = a || b;此时c=1 或者

int main()
{
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//a++为假，导致后面(++b d++)没执行

	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a++为真，导致后面（++b d++)没执行


	return 0;
}