#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

//
/**************************************1.交换两变量**************************************************/

//void Exchange1(int* m, int* n)//变量法
//{
//	int temp = *m;
//	*m = *n;
//	*n = temp;
//}
//void Exchange2(int* m, int* n)//加减法，当数字过大时可能会出现溢出
//{
//	*m = (*m) + (*n);
//	*n = (*m) - (*n);
//	*m = (*m) - (*n);
//
//}
//void Exchange3(int* m, int* n)//异或法
//{
//	*m = (*m) ^ (*n);
//	*n = (*m) ^ (*n);
//	*m = (*m) ^ (*n);
//
//}
//
//int main()
//{
//	int m, n;
//	printf("请输入数字m与n：\n");
//	scanf("%d %d", &m, &n);
//	printf("交换前：m=%d n=%d\n", m, n);
//	//Exchange1(&m, &n);//变量法
//	//Exchange2(&m, &n);//加减法
//	Exchange3(&m, &n);//异或法
//	printf("交换后：m=%d n=%d\n", m, n);
//}

/****************************************2.指针打印数组***********************************************/

//void print(int* arr, int leng)
//{
//	int i;
//	for (i = 0; i < leng; ++i)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int leng = sizeof(arr) / sizeof(arr[0]);
//	print(arr, leng);
//	return 0;
//}