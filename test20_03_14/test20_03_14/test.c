#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#define  uint unsigned int
/************************************* ����Ǹ�����ÿλ֮�� **************************************************/

//int Bit_sum1( uint a)//�ǵݹ�
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
//�ݹ�˼·
//2345
//Bit_sum2(2345)
//Bit_sum2(234)+2345%10
//Bit_sum2(23)+234%10+2345%10
//2 + 23 % 10 + 234 % 10 + 2345 % 10
//int Bit_sum2( uint a)//�ݹ�
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
//	printf("������Ҫ����ķǸ�������\n");
//	scanf("%d", &a);
//
//	//ret=Bit_sum1(a);
//	ret = Bit_sum2(a);
//
//	printf("ret = %d\n", ret);
//	return 0;
//}


/************************************* �ݹ�ʵ��n��k�η� ******************************************************/

//Power( n, k)
//Power( n, k-1)*n
//Power(n, k - 2)*Power(n, k - 1)*n
////Power(n, 1)����Power(n, k - 2)*Power(n, k - 1)*n
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
//	printf("������n��k:\n");
//	scanf("%d %d", &n, &k);
//
//	ret = Power(n, k);
//
//	printf("%d", ret);
//
//}

/************************************* ����쳲������� ********************************************************/


