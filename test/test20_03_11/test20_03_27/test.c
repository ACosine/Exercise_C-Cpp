#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

///***************************************数组逆置****************************************/
////创建一个整形数组，完成对数组的操作
////1、	实现函数init() 初始化数组为全0
////2、	实现print()  打印数组的每个元素
////3、	实现reverse()  函数完成数组元素的逆置。
//void Init(int arr[], int sz, int set)
//{
//	int i;
//	for (i = 0; i < sz; ++i)
//	{
//		arr[i] = set;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int lift = 0;
//	int right = sz - 1;
//	while (lift < right)
//	{
//		int temp = arr[lift];
//		arr[lift] = arr[right];
//		arr[right] = temp;
//		lift++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10];
//	Init(arr, 10, 0);//初始化为全0
//	Print(arr, 10);//打印数组
//	Reverse(arr, 10);//逆序数组
//	return 0;
//}
/*******************************交换数组A、B两数组中的内容(AB数组长度一致)*************************************/
//void Inputs(int a[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; ++i)
//	{
//		scanf("%d", &a[i]);
//	}
//
//}
//
//void Exchage(int arr[], int brr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; ++i)
//	{
//		int temp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = temp;
//	}
//}
//void Print(int a[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//

//int main()
//{
//	int arr[5];
//	int brr[5];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("输入数组arr\n");
//	Inputs(arr, sz);//数组输入起始值
//	printf("输入数组brr\n");
//	Inputs(brr, sz);
//	printf("交换前\n");
//	Print(arr, sz);
//	Print(brr, sz);
//	Exchage(arr, brr,sz);//交换
//	printf("交换后\n");
//	Print(arr,sz);
//	Print(brr,sz);
//	return 0;
//}