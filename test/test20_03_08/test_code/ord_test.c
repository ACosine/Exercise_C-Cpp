#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <math.h>
/**************************************************10���������Ӵ�С����**************************************************/
//void Rank(int Arr[], int n) //������
//{
//	for (int i = 0; i < n - 1; ++i)      //����
//	{
//		for (int j = 0; j < n - i - 1; ++j)  //��Ҫ�����Ԫ�ظ���
//		{
//			if (Arr[j + 1]>Arr[j])
//			{
//				Arr[j] = Arr[j] + Arr[j + 1];    //����������������������
//				Arr[j + 1] = Arr[j] - Arr[j + 1];
//				Arr[j] = Arr[j] - Arr[j + 1];
//			}
//		}
//	}
//}
//void Print_Rank(int Arr[], int n) //��ӡ����
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

/**************************����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 �Ľ��? (-1)^(n-1)*1/n************************/
//int main()
//{
//	double result = 0.0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		result += pow(-1.0, i - 1.0)*(1.0 / i); //ע�ⲻͬ���ȵĳ���
//	}
//	printf("result=%lf\n", result);
//	return 0;
//}

/*************************************1-100������9���ֵĴ���********************************************************/
//int main()
//{
//	int num = 0;
//	for (int i=1; i<=100; ++i)
//	{
//		if (9 == i % 10)	
//			num++;
//		if (9 == i / 10)
//			num++;      // 99 num������
//	}
//	printf("1-100������9���ֵĴ���Ϊ��%d\n", num);
//	return 0;
//}