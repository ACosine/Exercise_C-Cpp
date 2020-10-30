#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

/****************************************9*9乘法口诀********************************************************/
int main()
{
	for (int i = 1; i < 10; ++i) //趟数
	{
		for (int j = 1; j <i+1; ++j) //此趟元素个数为i
		{
			printf(" %d * %d = %d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
/***************************整形有序数组中查找具体的某个数(二分法)*****************************************/
//查找目标函数
//int Search_aim(int arr[], int  aim, int left, int right)
//{
//	int mid = 0;
//	while (left <= right) // 二分法循环体
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < aim)
//			left = mid + 1;
//		else if (arr[mid] >aim)
//			right = mid - 1;
//		else 
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int res;
//	int aim = 12;  //指定元素
//	int arr[] = { 3, 5, 7, 12, 34, 66, 65, 93 };//有序数组
//	int left = 0;
//	int right = sizeof(arr) / sizeof(int)-1;
//	res=Search_aim(arr,aim,left,right);
//	if (-1!=res)
//		printf("找到指定元素的下标，下标为：%d\n", res);
//	else
//		printf("找不到指定元素的下标\n");
//	return 0;
//}
