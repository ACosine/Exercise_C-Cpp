#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#define  uint unsigned int
/************************************* ����Ǹ�����ÿλ֮�� *************************************************/

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
//int Power1(int n, int k)//�ǵݹ�
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
////Power(n, 1)����Power(n, k - 2)*Power(n, k - 1)*n


//int Power2(int n, int k)//�ݹ�
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
//	printf("������n��k:\n");
//	scanf("%d %d", &n, &k);
//
//	ret = Power1(n, k);  //�ǵݹ�
//	ret = Power2(n, k); //�ݹ�
//
//	printf("%d", ret);
//
//}

/************************************* ���n��쳲������� ********************************************************/
//쳲���������ǰ����֮�͵��ڵ�������
//���磺1 1 2 3 5 8 13 21 34 55����

//int Fib1(int n) //�ǵݹ�
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
//�ݹ�˼·
//Fib(6)
//[ Fib(5) + Fib(4)]
//[ Fib(4) + Fib(3)] +[ Fib(3) + Fib(2)]
//[ Fib(3) + Fib(2)] +[ Fib(2) + Fib(1)] +[ Fib(2) + Fib(1)] + Fib(2)
//[ Fib(2) + Fib(1)] + Fib(2)  + [Fib(2) + Fib(1)] + [Fib(2) + Fib(1)] + Fib(2)
//1+1+1+1+1+1+1+1
//int Fib2(int n) //�ݹ�
//{
//	if (n <= 2) 
//		return 1;
//	else       //n>2�ŵݹ�
//		return Fib(n - 1) + Fib(n - 2);	
//}     //ϵͳ����������ջ�ռ������޵ģ���Fib�Ĳ�������ʱ���ܻ����stack overflow(ջ���)
//int main()
//{
//	int n = 0, ret = 0;
//	printf("������n\n");
//	scanf("%d", &n);
//
//	ret = Fib1(n);
//	//ret = Fib2(n);
//
//	printf("��n��쳲�������Ϊ��%d\n", ret);
//	return 0;
//}
















//char* my_strcpy(char* dest, const char* src);
//
//char*( * pf )(char*, const char*);//����ָ��
//char*( * pfarr[4] )(char*, const char*);//����ָ������