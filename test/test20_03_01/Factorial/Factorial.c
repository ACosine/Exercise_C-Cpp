#include<stdio.h>
#define ulong unsigned long 
#define uint unsigned int
/***************************************阶乘（递归调用）**************************************************************************/

//无符号长整型 unsigned long 数值范围0~4294967295（0~2^32-1）
//12以下的阶乘符合要求            13！=6227020800
//如何提高计算阶乘数？超级计算器如何做到的？

/*
ulong Factorial(ulong  n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*Factorial(n - 1);
	}

}
void  main()
{
	ulong n;
	printf("please input n：");
	scanf("%lu", &n);

	ulong  result = Factorial(n);
	printf("result = %lu\n", result);

	return NULL;
}
*/



/*******************************接受一个整型值（无符号），按照顺序打印它的每一位**************************************/
//uint 数值范围是0~65535
//当稍大于65535时也可以，过分大于65535就不行了

void Print(uint n)
{
	if (n > 9)              //高于两位数时一直除10递归调用
	{
		Print(n / 10);     
	}
	
	printf("%d ", n % 10);  //递归至一位数时打印，只打印每次递归回去的最后一位数字，即取余10
	
	return NULL;
}

void main()
{
	uint n;
	printf("please number of unsigned int type :\n");
	scanf("%d", &n);
	Print(n);
	return NULL;
}