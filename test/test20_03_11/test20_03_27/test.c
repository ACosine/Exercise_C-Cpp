#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

///***************************************��������****************************************/
////����һ���������飬��ɶ�����Ĳ���
////1��	ʵ�ֺ���init() ��ʼ������Ϊȫ0
////2��	ʵ��print()  ��ӡ�����ÿ��Ԫ��
////3��	ʵ��reverse()  �����������Ԫ�ص����á�
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
//	Init(arr, 10, 0);//��ʼ��Ϊȫ0
//	Print(arr, 10);//��ӡ����
//	Reverse(arr, 10);//��������
//	return 0;
//}
/*******************************��������A��B�������е�����(AB���鳤��һ��)*************************************/
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
//	printf("��������arr\n");
//	Inputs(arr, sz);//����������ʼֵ
//	printf("��������brr\n");
//	Inputs(brr, sz);
//	printf("����ǰ\n");
//	Print(arr, sz);
//	Print(brr, sz);
//	Exchage(arr, brr,sz);//����
//	printf("������\n");
//	Print(arr,sz);
//	Print(brr,sz);
//	return 0;
//}