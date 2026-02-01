#define _CRT_SECURE_NO_WARNINGS
//ctrl+f5 运行代码
//std-标准
//i-input
//o-outpot
#include <stdio.h>
//main函数是程序的入口
//main函数有且只有一个
  //int main() 
  //{
  //	printf("hello world\n");
  //	return 0;
  // }

  //int main()
  //{
  //printf("%d\n", sizeof(int));
  //printf("%d\n", sizeof(short));
  //printf("%d\n", sizeof(long));
  //printf("%d\n", sizeof(long long));
  //printf("%d\n", sizeof(char));
  //printf("%d\n", sizeof(float));
  //printf("%d\n", sizeof(double));
  //	return 0;
  //}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d", sum);
	return 0;

}

 