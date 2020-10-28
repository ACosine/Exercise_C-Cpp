#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num1 = 0;
	int num2 = 0;
	printf("Please input num1and num2\n");
	scanf("%d %d", &num1, &num2);
	if (num1 == num2)
		printf("num1等于num2,max=%d", num1);
	while (0 != num1 - num2)
	{

		if (num1 - num2 > 0)
		{
			printf("num1大于num2,max=%d", num1);
			break;
		}
		if (num1 - num2 < 0)
		{
			printf("num1小于num2,max=%d", num2);
			break;
		}
	}
	return 0;

}
//int number_max(int num1, int num2)
//{
//	if (num1 - num2 > 0)
//		return num1;
//	else
//		return num2;
//}
//int main()
//{
//	int num1 = 0,num2 = 0,max=0;
//	printf("Please input num1and num2\n");
//	scanf("%d %d",&num1,&num2);
//	if (num1 == num2)
//	{
//		printf("num1=num2=%d\n", num1);
//	}
//	else
//	{
//		max = number_max(num1,num2);
//		printf("max=%d\n", max);
//	}
//	return 0;
//}



