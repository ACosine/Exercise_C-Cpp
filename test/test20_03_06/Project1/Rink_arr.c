#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>

void Rank(int Arr[], int n)   //排序函数
{
	for (int i = 0; i < n - 1; ++i)         //趟数
	{
		for (int j = 0; j < n - i - 1; ++j)   //需要排序的元素个数
		{
			if (Arr[j+1]>Arr[j])
			{
				Arr[j] = Arr[j] + Arr[j + 1];    //不建立第三变量交换两数
				Arr[j + 1] = Arr[j] - Arr[j + 1];
				Arr[j] = Arr[j] - Arr[j + 1];
			}
		}
	}
}
void Print_Rank(int Arr[], int n)   //打印函数
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", Arr[i]);
	}
}
int main()
{
	int arr[3] = { 0,0,0 };
	printf("please input three numbers:\n");
	for (int i = 0; i < 3; ++i)
	{
		scanf("%d", &arr[i]);
	}
	Rank(arr, 3);
	Print_Rank(arr, 3);
	return 0;
}