#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

///******************************����Sn=a+aa+aaa+aaaa+aaaaa*********************************/
////2+22+222+2222+22222
//int Sumbit(int num,int n)
//{
//	int sum=0;
//	int ret=0;
//	int i;
//	for (i = 0; i < n; ++i)
//	{
//		sum = sum* 10 + num;//���ÿһ��
//		ret += sum;  //ÿ��֮��
//	}
//	return ret;
//}
//int main()
//{
//	int num,n;
//	printf("����������num������n\n");
//	scanf("%d %d", &num,&n);
//	int ret = Sumbit(num,n);
//	printf("%d", ret);
//	return 0;
//}
//
/*************************************��������ʹ����ȫ����λ��ż��ǰ��*****************************************/
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
////ʵ����������ż������
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		//���������
//		while (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		//�ұ���ż��
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

