#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

/******************************************1.统计二进制补码中1的个数************************************************/

//int count_2bit1(unsigned int num)//取余法
////注意用无符号整形来接收，将负数的符号位看做数值位再来计算1的个数
//{
//	int count=0;
//	while (num)
//	{
//		if (num % 2 == 1) // %2得二进制最后一位
//		{
//			count++;
//		}
//		num=num >> 1;//右移一位
//		//num = num / 2;
//	}
//	return count;
//}
//int count_2bit2(int num)//移位相与法
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; ++i)
//	{
//		if (((num >> i) & 1) == 1)//统计1的个数
//		//if (((num >> i) | 0) == 0)//统计0的个数
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
//int count_2bit3(int num)//自身相与法
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
//	printf("请输入数字：\n");
//	scanf("%d", &num);
//	//count=count_2bit1(num);//取余法
//	count = count_2bit2(num);//移位相与法
//	//count = count_2bit3(num);//自身相与法
//	printf("二进制1的个数count=%d\n", count);
//	return 0;
//}

/******************************************2.二进制中不同位的个数************************************************/

//int Distinct_2bit(int m, int n)
//{
//	int count=0;
//	int temp = m^n;//异或:相异为1，相同为0
//	while (temp)//统计1的个数，即二进制中不同位的个数
//	{
//		temp = temp&(temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	printf("请输入数字m与n:\n");
//	scanf("%d %d", &m, &n);
//	int ret = Distinct_2bit(m,n);
//	printf("%d\n", ret);
//	return 0;
//}

/******************************************3.分别打印二进制的奇数位和偶数位*************************************/

//void print(int num)
//{
//	printf("打印奇数位\n");
//	int i;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);//与1得二进制中的每一位
//	}
//	printf("\n");
//
//	printf("打印偶数位\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num;
//	printf("请输入数字num:\n");
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}