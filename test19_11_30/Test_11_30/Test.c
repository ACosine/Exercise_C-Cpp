#include<stdio.h>
#include<assert.h>

/******************************ð������ѡ�����ģ���С�������У�********************************************/
void Sort(int ar[], int n)    
{
	for (int i = 0; i<n - 1; ++i)                  //����
	{
		for (int j = 0; j<n - i - 1; ++j)            //ÿ��һ�ˣ�������Ԫ����һ��
		{
			if (ar[j] < ar[j + 1])               //ǰ���Ԫ��Ҫ�ǱȺ����Ԫ�ش�����н���
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}
void main()
{

	int ar[] = { 0 };
	printf("please input number ar[5]:");
	for (int i = 0; i < 5; ++i)
		{
			scanf("%d", &ar[i]);		
		}	
	Sort(ar, 5);
		for (int i = 0; i<5; ++i)
		{
			printf("%d ", ar[i]);
		}
}
/**********************************Сд��ĸת���ɴ�д��ĸ********************************************/
//char *toupper(char *str,int n)    
//{
//	assert(str != NULL);
//	{
//		int n = strlen(str);
//		for (int i = 0; i < n-1; ++i)
//		{
//			if (str[i] >= 'a'&&str[i] <= 'z')
//			str[i] -= 32;
//		}
//		return str;
//	}
//}
//
//int main()
//{
//	char *res;
//	char str[100] = { 0 };
//	while (1)
//	{
//		gets(str);
//		res = toupper(str);
//		printf("res=%s\n", res);
//	}
//	return 0;
//}

/**********************************��С�˼��********************************************/
//С�ˣ����ݵĵ�λ�洢���ڴ�ĵ͵�ַ��
//��ˣ����ݵĸ�λ�洢���ڴ�ĵ͵�ַ��
//����i = 0x 00 00 00 01
//С���ֽ���洢ģʽ �ڴ��� 01 00 00 00
//����ֽ���洢ģʽ �ڴ��� 00 00 00 01
//������iqȡ��ַ��ǿ��ת����char*���ٽ����ã�ȡ���8λ��������1С�ˣ���1����ˡ�
//int check_sys()         
//{
//	int i = 1;  
//	return (*(char*)&i);   //1С�ˣ���1���
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)  
//		printf("С��\n");
//	else
//		printf("���\n");
//	
//	return 0;
//}