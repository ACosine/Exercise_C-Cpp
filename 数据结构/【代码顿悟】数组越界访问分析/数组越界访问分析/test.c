#define _CRT_SECURE_NO_WARNINGS 1  
//VS������������Ĵ���,�����������ԭ��
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };                        //ӵ��10��Ԫ�ص���������
	for (i = 0; i <= 12; i++)                             //ѭ��13��,Խ�����
	{
		arr[i] = 0;
		printf("Hello World.\n");
	}
	system("pause");
	return 0;
}