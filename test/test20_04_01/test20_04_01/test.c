#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

///******************************计算Sn=a+aa+aaa+aaaa+aaaaa*********************************/
////2+22+222+2222+22222
//int Sumbit(int num,int n)
//{
//	int sum=0;
//	int ret=0;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		sum = sum* 10 + num;//求得每一项
//		ret += sum;  //每项之和
//	}
//	return ret;
//}
//int main()
//{
//	int num,n;
//	printf("请输入数字num和项数n\n");
//	scanf("%d %d", &num,&n);
//	int ret = Sumbit(num,n);
//	printf("%d", ret);
//	return 0;
//}
//
/*************************************调整数组使奇数全部都位于偶数前面*****************************************/
//void get_arr(int* arr, int n)
//{
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		scanf("%3d", arr + i);
//	}
//
//}
//void change_arr(int arr[], int n)
////实现奇数在左，偶数在右
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		//左边找奇数
//		while (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		//右边找偶数
//		while (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//void print_arr(int arr[], int n)
//{
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[10] = {0};
//	get_arr(arr,10);
//	change_arr(arr,10);
//	print_arr(arr,10);
//	return 0;
//
//}

