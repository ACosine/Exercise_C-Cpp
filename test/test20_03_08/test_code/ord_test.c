#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <math.h>
/**************************************************10个整数按从大到小排序**************************************************/
//void Rank(int Arr[], int n) //排序函数
//{
//	for (int i = 0; i < n - 1; ++i)      //趟数
//	{
//		for (int j = 0; j < n - i - 1; ++j)  //需要排序的元素个数
//		{
//			if (Arr[j + 1]>Arr[j])
//			{
//				Arr[j] = Arr[j] + Arr[j + 1];    //不建立第三变量交换两数
//				Arr[j + 1] = Arr[j] - Arr[j + 1];
//				Arr[j] = Arr[j] - Arr[j + 1];
//			}
//		}
//	}
//}
//void Print_Rank(int Arr[], int n) //打印函数
//{
//	for (int i = 0; i < n; ++i)
//	{
//		printf("%d ", Arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	printf("please input ten numbers:\n");
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Rank(arr, 10);
//    Print_Rank(arr, 10);
//	return 0;
//}

/**************************计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的结果? (-1)^(n-1)*1/n************************/
//int main()
//{
//	double result = 0.0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		result += pow(-1.0, i - 1.0)*(1.0 / i); //注意不同精度的除法
//	}
//	printf("result=%lf\n", result);
//	return 0;
//}

/*************************************1-100中数字9出现的次数********************************************************/
//int main()
//{
//	int num = 0;
//	for (int i=1; i<=100; ++i)
//	{
//		if (9 == i % 10)	
//			num++;
//		if (9 == i / 10)
//			num++;      // 99 num加两次
//	}
//	printf("1-100中数字9出现的次数为：%d\n", num);
//	return 0;
//}