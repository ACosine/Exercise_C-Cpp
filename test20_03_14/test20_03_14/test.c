#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#define  uint unsigned int
/************************************* 计算非负数的每位之和 **************************************************/

//int Bit_sum1( uint a)//非递归
//{
//	uint sum = 0;
//	uint num = a;
//	while (num>0)
//	{
//		sum += num % 10;
//		num /= 10;
//		   
//	}
//	return sum;
//}
//递归思路
//2345
//Bit_sum2(2345)
//Bit_sum2(234)+2345%10
//Bit_sum2(23)+234%10+2345%10
//2 + 23 % 10 + 234 % 10 + 2345 % 10
//int Bit_sum2( uint a)//递归
//{
//	uint num = a;
//	if (num > 9)
//		return Bit_sum2(num / 10)+ num%10 ;
//	else
//		return num;
//}
//
//int main()
//{
//	uint a = 0;
//	uint ret = 0;
//	printf("请输入要计算的非负整数：\n");
//	scanf("%d", &a);
//
//	//ret=Bit_sum1(a);
//	ret = Bit_sum2(a);
//
//	printf("ret = %d\n", ret);
//	return 0;
//}


/************************************* 递归实现n的k次方 ******************************************************/

//Power( n, k)
//Power( n, k-1)*n
//Power(n, k - 2)*Power(n, k - 1)*n
////Power(n, 1)……Power(n, k - 2)*Power(n, k - 1)*n
//int Power(int n, int k)
//{
//	if (k > 1)
//		return Power(n, k - 1)*n;
//	else
//		return n;
//
//}
//int main()
//{
//	int n = 0, k = 0, ret = 0;
//	printf("请输入n和k:\n");
//	scanf("%d %d", &n, &k);
//
//	ret = Power(n, k);
//
//	printf("%d", ret);
//
//}

/************************************* 计算斐波那契数 ********************************************************/


