#include<stdio.h>
#define ulong unsigned long 
#define uint unsigned int
/***************************************�׳ˣ��ݹ���ã�**************************************************************************/

//�޷��ų����� unsigned long ��ֵ��Χ0~4294967295��0~2^32-1��
//12���µĽ׳˷���Ҫ��            13��=6227020800
//�����߼���׳�����������������������ģ�

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
	printf("please input n��");
	scanf("%lu", &n);

	ulong  result = Factorial(n);
	printf("result = %lu\n", result);

	return NULL;
}
*/



/*******************************����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ**************************************/
//uint ��ֵ��Χ��0~65535
//���Դ���65535ʱҲ���ԣ����ִ���65535�Ͳ�����

void Print(uint n)
{
	if (n > 9)              //������λ��ʱһֱ��10�ݹ����
	{
		Print(n / 10);     
	}
	
	printf("%d ", n % 10);  //�ݹ���һλ��ʱ��ӡ��ֻ��ӡÿ�εݹ��ȥ�����һλ���֣���ȡ��10
	
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