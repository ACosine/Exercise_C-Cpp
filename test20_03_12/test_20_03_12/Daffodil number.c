//#define _CRT_SECURE_NO_WARNINGS 1  
//#include<stdio.h>
//#include<math.h>
////ˮ�ɻ����ֳ���������һ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
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