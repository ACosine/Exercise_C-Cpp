//#include<stdio.h>
//int main()
//{
//	int i, sum;
//	i = 1;
//	sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i += 1;
//	}
//	printf("1到100的和为:%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, sum;
//	i = 1;
//	sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i += 1;
//	}
//	printf("1到100的和为:%6d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, sum;
//	i = 1;
//	sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i += 1;
//	}
//	printf("1到100的和为:%06d\n", sum);
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int i, sum;
//	i = 1;
//	sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i += 1;
//	}
//	printf("1到100的和为:%-6d\n", sum);
//	return 0;
//}

#include<stdio.h>
int main()
{
	float i, sum;
	i = 1;
	sum = 0;
	while (i <= 100)
	{
		sum += i;
		i += 1;
	}
	printf("1到100的和为:%.6f\n", sum);
	return 0;
}