//#define _CRT_SECURE_NO_WARNINGS 1  
//#include<stdio.h>
//int main()
//{
//	int Row=0;
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
//	for (i = 0; i < Row-1; ++i)//下半部分比上半部分少一行
//	{
//		int j;
//		//1.1打印空格
//		for (j = 0; j <= i; ++j)
//		{
//			//1  2  3   第i行空格的个数i
//			printf(" ");
//		}
//		//1.2打印*
//		for ( j = 0; j < 2*(Row-1-i)-1; ++j)
//			//第一行Row-1-0  第二行Row-1-1 第三行Row-1-2 …第i行Row-1-i
//		{
//			printf("*");
//		}
//		printf("\n");//每行打印完需要换行
//	}
//	return 0;
//}