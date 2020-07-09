#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <malloc.h>
/*��������������ϲ���һ����������*/
//ʱ�临�Ӷ�O(M+N)  ��������ִ�еĴ���
//�ռ临�Ӷ�O(M+N)  �����ռ�ĸ���

int * MergeData(int array1[], int size1, int array2[], int size2)
{
	int index = 0, index1 = 0, index2 = 0;
	int* array = (int*) malloc((size1 + size2)*sizeof(array1[0]));//��̬����������
	if (NULL == array)
		return NULL;
	while (index1<size1 && index2<size2)   //�������鶼δ������                                                                                                  
	{
		if (array1[index1] <= array2[index2])
			array[index++] = array1[index1++];
		else
			array[index++] = array2[index2++];
	}
	while (index1 < size1)       //����1δ������
		array[index++] = array1[index1++];
	while (index2 < size2)       //����2δ������
		array[index++] = array2[index2++];
	return array;
}
int main()
{
	int array1[] = { 1, 3, 5, 7, 9 };
	int array2[] = { 2, 4, 6, 8, 10};
	int size1 = sizeof(array1) / sizeof(array1[0]);
	int size2 = sizeof(array2) / sizeof(array2[0]);
	int* array = MergeData(array1, size1, array2, size2);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}