#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
/*********************************************1.ģ��ʵ��my_strlen**************************************/
//int my_strlen1(const char* arr)//������
//{
//	assert(arr);
//	int leng=0;
//	while (*arr++) 
//		// 1.*arr 2.arr++(ע���++�Ľ���Ը���*�������Ǻ�++)
//	{
//		leng++;
//	}
//	return leng;
//}
//int my_strlen2(const char* arr)//ָ�뷨
//{
//	assert(arr);
//	int leng = 0;
//	const char* p = arr;
//	while (*p != 0) //�ҵ�\0
//	{
//		p++;
//	}
//	return (p - arr);
//}
////�ݹ�˼·��
////"abc\0"   
////1 + my_strlen3("bc\0")
////1 + 1 + my_strlen3("c\0")
////1 + 1 + 1 + my_strlen3("\0")
////1 + 1 + 1 + 0
//int my_strlen3(const char* arr)//�ݹ鷨����������������
//{
//	assert(arr);
//	if (*arr == 0)
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen3(++arr);//�˴���ǰ�Ӽ�
//}
//int main()//�⺯��strlen()���ص����޷�������
//{
//	char arr[30];
//	gets(arr);
//
//	int leng = my_strlen3(arr);
//	printf("leng=%d\n", leng);
//	return 0;
//}
/*********************************************2.ģ��ʵ��my_strcpy**************************************/
//char* my_strcpy(char* destination, const char* source)
//	
//{
//	assert(destination && source);
//	char *p = destination;//��������
//	while (*destination++ = *source++);
//	return p;
//}
//int main()
//{
//	//Destination�ɱ����㹻��,Source�����н�����־
//	char Source[30];
//	char Destination[30];
//
//	printf("������Դ�ַ���Source:\n");
//	gets(Source);
//	printf("������Դ�ַ���Destination:\n");
//	gets(Destination);
//
//	my_strcpy(Destination, Source);
//	puts(Destination);
//	return 0;
//}
/*********************************************3.ģ��ʵ��my_strcat**************************************/
//char* my_strcat(char* destination, const char*source)
//{
//	assert(destination && source);
//	char *p = destination;
//	//1.��Ŀ���ַ���\0
//	while (*p != 0)
//	{
//		p++;
//	}
//	//2.׷��(copy)Դ�ַ���
//	while (*p++ = *source++);
//	//3.����
//	return destination;
//}
//int main()
//{
//	//Destination�ɱ����㹻��,���߱��붼�н�����־
//	char Source[30];
//	char Destination[30];
//
//	printf("������Դ�ַ���Source:\n");
//	gets(Source);
//
//	printf("������Ŀ���ַ���Destination:\n");
//	gets(Destination);
//
//	my_strcat(Destination, Source);
//	puts(Destination);
//	return 0;
//}
/*********************************************4.ģ��ʵ��my_strcmp**************************************/
int my_strcmp(const char* arr1,const char* arr2)
{
	assert(arr1&&arr2);
	//�Ƚ�
	while (*arr1==*arr2)
	{
		if (*arr1 == 0)
			return 0;
		arr1++;
		arr2++;
	}
	 return arr1 - arr2;  
	 //arr1>arr2   ����>0����
	 //arr1==arr2   ����0
	 //arr1<arr2   ����<0����
}
int main()
{
	char arr1[20];
	char arr2[20];

	printf("������Դ�ַ���arr1:\n");
	gets(arr1);
	printf("������Դ�ַ���arr2:\n");
	gets(arr2);

	int ret = my_strcmp(arr1,arr2);
	if (ret == 0)
		printf("arr1==arr2\n");
	else if (ret > 0)
		printf("arr1>arr2\n");
	else if (ret < 0)
		printf("arr1<arr2\n");
	return 0;
}
