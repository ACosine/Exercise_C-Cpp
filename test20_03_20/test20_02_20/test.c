#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<math.h>
#include<assert.h>

/******************************************1.ˮ�ɻ���**************************************/

////ˮ�ɻ����ֳ���������
////һ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//int main()
//{
//	int i;
//	for (i = 0; i <= 100000; ++i)
//	{
//		int n = 1;
//		int sum = 0;//ÿ��ѭ������sum��ӦΪ0
//
//		//1.�ж�i��λ��n
//		int temp1 = i;//��������
//		while (temp1 /= 10)
//		{
//			n++;
//		}
//		//2.ÿһλ��n�η�֮��sum
//		int temp2 = i;//��������
//		while (temp2)
//		{
//			sum += (int)pow((temp2 % 10), n);//sprt��ƽ��pow�η���������double
//			temp2 /= 10;
//		}
//		//3.�жϴ˴�ѭ����i�Ƿ����sum
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

/******************************************2.����****************************************/

//int main()
//{
//	int Row = 0;
//	printf("������Ҫ������ε�������\n");
//	scanf("%d", &Row);
//	//1.��ӡ���ε��ϰ벿��
//	int i;
//	for (i = 0; i < Row; ++i)
//	{
//		int j;
//		//1.1��ӡ�ո�
//		for (j = 0; j < Row - 1 - i; ++j)
//			//��һ�пո�Row-1-0  �ڶ���Row-1-1 ������Row-1-2 ����i��Row-1-i
//		{
//			printf(" ");
//		}
//		//1.2��ӡ*
//		for (j = 0; j < (2 * i + 1); ++j)
//			//1  3  5   ��i��*�ĸ���2i+1
//		{
//			printf("*");
//		}
//		printf("\n");//ÿ�д�ӡ����Ҫ����
//	}
//	////2.��ӡ���ε��°벿��
//	for (i = 0; i < Row - 1; ++i)//�°벿�ֱ��ϰ벿����һ��
//	{
//		int j;
//		//1.1��ӡ�ո�
//		for (j = 0; j <= i; ++j)
//		{
//			//1  2  3   ��i�пո�ĸ���i
//			printf(" ");
//		}
//		//1.2��ӡ*
//		for (j = 0; j < 2 * (Row - 1 - i) - 1; ++j)
//			//��һ��Row-1-0  �ڶ���Row-1-1 ������Row-1-2 ����i��Row-1-i
//		{
//			printf("*");
//		}
//		printf("\n");//ÿ�д�ӡ����Ҫ����
//	}
//	return 0;
//}

/*****************************************3.�ַ�������**********************************/

//void reverse1(char *arr)
//{
//	assert(arr);
//	char* right = arr + strlen(arr) - 1;
//	char* lift = arr;
//	while (lift<right)
//	{
//		char temp = *right;
//		*right = *lift;
//		*lift = temp;
//		right--;
//		lift++;
//	}
//}
////void reverse2(char arr[])
////{
////	assert(arr);
////	int right = strlen(arr) - 1;
////	int lift = 0;
////	while (lift < right)
////	{
////		char temp = arr[right];
////		arr[right] = arr[lift];
////		arr[lift] = temp;
////		lift++;
////		right--;
////	}
////}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//
//	reverse1(arr);
//	puts(arr);
//
//	//reverse2(arr);
//	//puts(arr);
//
//	return 0;
//}