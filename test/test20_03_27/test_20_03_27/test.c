#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

/******************************************1.ͳ�ƶ����Ʋ�����1�ĸ���************************************************/

//int count_2bit1(unsigned int num)//ȡ�෨
////ע�����޷������������գ��������ķ���λ������ֵλ��������1�ĸ���
//{
//	int count=0;
//	while (num)
//	{
//		if (num % 2 == 1) // %2�ö��������һλ
//		{
//			count++;
//		}
//		num=num >> 1;//����һλ
//		//num = num / 2;
//	}
//	return count;
//}
//int count_2bit2(int num)//��λ���뷨
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		if (((num >> i) & 1) == 1)//ͳ��1�ĸ���
//		//if (((num >> i) | 0) == 0)//ͳ��0�ĸ���
//		{
//			count++;
//		}
//	}
//	return count;
//}
////13
////1101 n
////1100 n-1
////1100 n&(n-1)
////
////1100 n
////1011 n - 1
////1000 n&(n - 1)
////
////1000 n
////0111 n - 1
////0000 n&(n - 1)
//
//int count_2bit3(int num)//�������뷨
//{
//	int count = 0;
//	while (num)
//	{
//		num = num&(num - 1);
//		count++;
//	}
//	return  count;
//}
//
//int main()
//{
//	int count=0,num;
//	printf("���������֣�\n");
//	scanf("%d", &num);
//	//count=count_2bit1(num);//ȡ�෨
//	count = count_2bit2(num);//��λ���뷨
//	//count = count_2bit3(num);//�������뷨
//	printf("������1�ĸ���count=%d\n", count);
//	return 0;
//}

/******************************************2.�������в�ͬλ�ĸ���************************************************/

//int Distinct_2bit(int m, int n)
//{
//	int count=0;
//	int temp = m^n;//���:����Ϊ1����ͬΪ0
//	while (temp)//ͳ��1�ĸ��������������в�ͬλ�ĸ���
//	{
//		temp = temp&(temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	printf("����������m��n:\n");
//	scanf("%d %d", &m, &n);
//	int ret = Distinct_2bit(m,n);
//	printf("%d\n", ret);
//	return 0;
//}

/******************************************3.�ֱ��ӡ�����Ƶ�����λ��ż��λ*************************************/

//void print(int num)
//{
//	printf("��ӡ����λ\n");
//	int i;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);//��1�ö������е�ÿһλ
//	}
//	printf("\n");
//
//	printf("��ӡż��λ\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num;
//	printf("����������num:\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}