#define _CRT_SECURE_NO_WARNINGS 1  
//VS环境调试下面的代码,分析问题出现原因
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };                        //拥有10个元素的整型数组
	for (i = 0; i <= 12; i++)                             //循环13次,越界访问
	{
		arr[i] = 0;
		printf("Hello World.\n");
	}
	system("pause");
	return 0;
}