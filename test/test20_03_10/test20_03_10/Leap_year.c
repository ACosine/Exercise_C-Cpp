#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<math.h>
/*****************************************��ӡ100~200֮�������*****************************************************/
int Is_prime(int n)
{
	for (int i = 2; i<= sqrt(n); ++i)      //1.��2��n-1�����Գ� 2.��2��n/2�����Գ�  3.��2������n�����Գ�  
	{
		if (n % i == 0)
			return -1;    
	}
	return 1;
}
int main()
{
	int count=0;
	for (int n = 100; n <= 200; ++n)
	{
		if (Is_prime(n) == 1)
		{
			count++;
			printf("%d ", n);
		}
	}
	printf("\n���ƣ�%d\n", count);
	return 0;
}
/*****************************************����*****************************************************/
//int main()
//
//{
//	int count=0;
//	for (int year = 1000; year <= 2000; ++year)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n���ƣ�%d\n", count);
//	return 0;
//}
/*****************************************���Լ��*****************************************************/
//int main()
//{
//	int a, b,c;
//	printf("please input two numbers:\n");
//	scanf("%d%d", &a, &b);
//	while(c = a % b)  //������Ϊ��ʱ����ѭ����
//	{
//		a = b;  //շת����
//		b = c;
//	}
//	printf("���Լ��Ϊ��%d\n", b);
//
//	return 0;
//}


/**************************��ӡ1-100֮������3�ı���������**************************************************/
//int main()
//{
//	int count=0;
//	for (int i = 1; i <= 100; ++i)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d ", i);
//			count++;
//		}	
//	}
//	printf("\n���ƣ�%d\n", count);
//	return 0;
//}