#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<math.h>
#include<assert.h>

/******************************************1.水仙花数**************************************/

////水仙花数又称自幂数：
////一个n位数，其各位数字的n次方之和确好等于该数本身
//int main()
//{
//	int i;
//	for (i = 0; i <= 100000; ++i)
//	{
//		int n = 1;
//		int sum = 0;//每次循环进来sum都应为0
//
//		//1.判断i的位数n
//		int temp1 = i;//参数保护
//		while (temp1 /= 10)
//		{
//			n++;
//		}
//		//2.每一位的n次方之和sum
//		int temp2 = i;//参数保护
//		while (temp2)
//		{
//			sum += (int)pow((temp2 % 10), n);//sprt开平方pow次方返回类型double
//			temp2 /= 10;
//		}
//		//3.判断此次循环中i是否等于sum
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

/******************************************2.菱星****************************************/

//int main()
//{
//	int Row = 0;
//	printf("请输入要输出菱形的行数：\n");
//	scanf("%d", &Row);
//	//1.打印菱形的上半部分
//	int i;
//	for (i = 0; i < Row; ++i)
//	{
//		int j;
//		//1.1打印空格
//		for (j = 0; j < Row - 1 - i; ++j)
//			//第一行空格Row-1-0  第二行Row-1-1 第三行Row-1-2 …第i行Row-1-i
//		{
//			printf(" ");
//		}
//		//1.2打印*
//		for (j = 0; j < (2 * i + 1); ++j)
//			//1  3  5   第i行*的个数2i+1
//		{
//			printf("*");
//		}
//		printf("\n");//每行打印完需要换行
//	}
//	////2.打印菱形的下半部分
//	for (i = 0; i < Row - 1; ++i)//下半部分比上半部分少一行
//	{
//		int j;
//		//1.1打印空格
//		for (j = 0; j <= i; ++j)
//		{
//			//1  2  3   第i行空格的个数i
//			printf(" ");
//		}
//		//1.2打印*
//		for (j = 0; j < 2 * (Row - 1 - i) - 1; ++j)
//			//第一行Row-1-0  第二行Row-1-1 第三行Row-1-2 …第i行Row-1-i
//		{
//			printf("*");
//		}
//		printf("\n");//每行打印完需要换行
//	}
//	return 0;
//}

/*****************************************3.字符串逆序**********************************/

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