#include<stdio.h>

int GCD(a, b)
{
	int k;
	if (a>b)
		k = a;
	else
		k = b;
	while (1)
	{
		if(k % a == 0 && k % b == 0)  //k�ܹ�����a�����ܹ�����b
			break;
		k++;
	}
	return k;
}
int main()
{
	int A, B, res;
	printf("������������������A��B\n");
	scanf("%d %d", &A, &B);
	res = GCD(A, B);
	printf("A��B����С������Ϊ��%d\n", res);
	return 0;
}