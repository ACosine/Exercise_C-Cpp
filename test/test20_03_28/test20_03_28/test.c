#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

//
/**************************************1.����������**************************************************/

//void Exchange1(int* m, int* n)//������
//{
//	int temp = *m;
//	*m = *n;
//	*n = temp;
//}
//void Exchange2(int* m, int* n)//�Ӽ����������ֹ���ʱ���ܻ�������
//{
//	*m = (*m) + (*n);
//	*n = (*m) - (*n);
//	*m = (*m) - (*n);
//
//}
//void Exchange3(int* m, int* n)//���
//{
//	*m = (*m) ^ (*n);
//	*n = (*m) ^ (*n);
//	*m = (*m) ^ (*n);
//
//}
//
//int main()
//{
//	int m, n;
//	printf("����������m��n��\n");
//	scanf("%d %d", &m, &n);
//	printf("����ǰ��m=%d n=%d\n", m, n);
//	//Exchange1(&m, &n);//������
//	//Exchange2(&m, &n);//�Ӽ���
//	Exchange3(&m, &n);//���
//	printf("������m=%d n=%d\n", m, n);
//}

/****************************************2.ָ���ӡ����***********************************************/

//void print(int* arr, int leng)
//{
//	int i;
//	for (i = 0; i < leng; ++i)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int leng = sizeof(arr) / sizeof(arr[0]);
//	print(arr, leng);
//	return 0;
//}