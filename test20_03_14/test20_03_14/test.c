#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#define  uint unsigned int
/************************************* 计算非负数的每位之和 *************************************************/

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
//int Power1(int n, int k)//非递归
//{
//	int res = 1;
//	while (k > 0)
//	{
//		res *= n;
//		k--;
//	}
//	return res;
//}

//Power( n, k)
//Power( n, k-1)*n
//Power(n, k - 2)*Power(n, k - 1)*n
////Power(n, 1)……Power(n, k - 2)*Power(n, k - 1)*n


//int Power2(int n, int k)//递归
//{
//	if (k > 1)
//		return Power2(n, k - 1)*n;
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
//	ret = Power1(n, k);  //非递归
//	ret = Power2(n, k); //递归
//
//	printf("%d", ret);
//
//}

/************************************* 求第n个斐波那契数 ********************************************************/
//斐波那契数：前两数之和等于第三个数
//比如：1 1 2 3 5 8 13 21 34 55……

//int Fib1(int n) //非递归
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//递归思路
//Fib(6)
//[ Fib(5) + Fib(4)]
//[ Fib(4) + Fib(3)] +[ Fib(3) + Fib(2)]
//[ Fib(3) + Fib(2)] +[ Fib(2) + Fib(1)] +[ Fib(2) + Fib(1)] + Fib(2)
//[ Fib(2) + Fib(1)] + Fib(2)  + [Fib(2) + Fib(1)] + [Fib(2) + Fib(1)] + Fib(2)
//1+1+1+1+1+1+1+1
//int Fib2(int n) //递归
//{
//	if (n <= 2) 
//		return 1;
//	else       //n>2才递归
//		return Fib(n - 1) + Fib(n - 2);	
//}     //系统分配给程序的栈空间是有限的，当Fib的参数过大时可能会出现stack overflow(栈溢出)
//int main()
//{
//	int n = 0, ret = 0;
//	printf("请输入n\n");
//	scanf("%d", &n);
//
//	ret = Fib1(n);
//	//ret = Fib2(n);
//
//	printf("第n个斐波那契数为：%d\n", ret);
//	return 0;
//}
















//char* my_strcpy(char* dest, const char* src);
//
//char*( * pf )(char*, const char*);//函数指针
//char*( * pfarr[4] )(char*, const char*);//函数指针数组