#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>

void Rank(int Arr[], int n)   //������
{
	for (int i = 0; i < n - 1; ++i)         //����
	{
		for (int j = 0; j < n - i - 1; ++j)   //��Ҫ�����Ԫ�ظ���
		{
			if (Arr[j+1]>Arr[j])
			{
				Arr[j] = Arr[j] + Arr[j + 1];    //����������������������
				Arr[j + 1] = Arr[j] - Arr[j + 1];
				Arr[j] = Arr[j] - Arr[j + 1];
			}
		}
	}
}
void Print_Rank(int Arr[], int n)   //��ӡ����
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", Arr[i]);
	}
}
int main()
{
	int arr[3] = { 0,0,0 };
	printf("please input three numbers:\n");
	for (int i = 0; i < 3; ++i)
	{
		scanf("%d", &arr[i]);
	}
	Rank(arr, 3);
	Print_Rank(arr, 3);
	return 0;
}