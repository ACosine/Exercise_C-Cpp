#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<math.h>
/*****************************************打印100~200之间的素数*****************************************************/
int Is_prime(int n)
{
	for (int i = 2; i<= sqrt(n); ++i)      //1.用2至n-1挨个试除 2.用2至n/2挨个试除  3.用2至根号n挨个试除  
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
	printf("\n共计：%d\n", count);
	return 0;
}
/*****************************************闰年*****************************************************/
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
//	printf("\n共计：%d\n", count);
//	return 0;
//}
/*****************************************最大公约数*****************************************************/
//int main()
//{
//	int a, b,c;
//	printf("please input two numbers:\n");
//	scanf("%d%d", &a, &b);
//	while(c = a % b)  //余数不为零时进入循环体
//	{
//		a = b;  //辗转相余
//		b = c;
//	}
//	printf("最大公约数为：%d\n", b);
//
//	return 0;
//}


/**************************打印1-100之间所有3的倍数的数字**************************************************/
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
//	printf("\n共计：%d\n", count);
//	return 0;
//}