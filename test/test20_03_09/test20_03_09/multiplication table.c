#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

/****************************************9*9�˷��ھ�********************************************************/
int main()
{
	for (int i = 1; i < 10; ++i) //����
	{
		for (int j = 1; j <i+1; ++j) //����Ԫ�ظ���Ϊi
		{
			printf(" %d * %d = %d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
/***************************�������������в��Ҿ����ĳ����(���ַ�)*****************************************/
//����Ŀ�꺯��
//int Search_aim(int arr[], int  aim, int left, int right)
//{
//	int mid = 0;
//	while (left <= right) // ���ַ�ѭ����
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < aim)
//			left = mid + 1;
//		else if (arr[mid] >aim)
//			right = mid - 1;
//		else 
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int res;
//	int aim = 12;  //ָ��Ԫ��
//	int arr[] = { 3, 5, 7, 12, 34, 66, 65, 93 };//��������
//	int left = 0;
//	int right = sizeof(arr) / sizeof(int)-1;
//	res=Search_aim(arr,aim,left,right);
//	if (-1!=res)
//		printf("�ҵ�ָ��Ԫ�ص��±꣬�±�Ϊ��%d\n", res);
//	else
//		printf("�Ҳ���ָ��Ԫ�ص��±�\n");
//	return 0;
//}
