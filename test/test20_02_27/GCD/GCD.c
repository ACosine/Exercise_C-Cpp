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
		if(k % a == 0 && k % b == 0)  //k能够整除a并且能够整除b
			break;
		k++;
	}
	return k;
}
int main()
{
	int A, B, res;
	printf("请输入两个数正整数A和B\n");
	scanf("%d %d", &A, &B);
	res = GCD(A, B);
	printf("A和B的最小公倍数为：%d\n", res);
	return 0;
}