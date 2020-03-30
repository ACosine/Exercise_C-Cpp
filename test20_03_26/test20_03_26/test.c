#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<math.h>
/**********************************1、函数判断素数****************************************************/

//int IsPrime(int value)              //素数：只能被自身和1整除的数称为素数
//{
//	for (int i = 2; i<= sqrt(value); ++i)       //看该数是否被2到它本身之间的某个数整除，优化[2,value)、[2，根号value]、[2,value/2].
//	{                                            
//		if (value % i == 0)
//			return 0;            //一旦被整除（余数为零）则说明它不是素数，返回1
//	}
//	return 1;                     //否则它是素数，返回0
//}
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; ++i)
//	{
//		if (IsPrime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n 100-200之间共计素数：%d \n", count);
//	return 0;
//}

/**********************************2、函数判断闰年****************************************************/

//int IsLeap(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;//是闰年
//	}
//	return 0;//不是闰年
//}
//int main()
//
//{
//	int year = 0;
//	printf("请输入需要查询的年份：\n");
//	scanf("%d", &year);
//	if (IsLeap(year))
//		printf("%d 年是闰年\n", year);
//	else
//		printf("%d 年不是闰年\n", year);
//	return 0;
//}

/**********************************3、函数交换两个正数****************************************************/

//void Exchange(int* a, int* b)
//{
//	*a = *a ^ *b; //按位异或法交换两数
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int a, b;
//	printf("请输入要交换的数a和b:\n");
//	scanf("%d %d", &a, &b);
//	printf("交换前 a=%d b=%d\n",a,b);
//	Exchange(&a, &b);
//	printf("交换后 a=%d b=%d\n",a,b);
//	return 0;
//}

/**********************************4、函数乘法口诀表****************************************************/

//void Mul_table(m)
//{
//	for (int i = 1; i < m+1; ++i) //行数
//	{
//		for (int j = 1; j <i + 1; ++j) //每行是i列
//		{
//			printf(" %3d*%3d = %3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int m = 0;
//	printf("请输入乘法口诀表的行或列：\n");
//	scanf("%d", &m);
//	Mul_table(m);//m*m乘法口诀表
//	return 0;
//}
//
