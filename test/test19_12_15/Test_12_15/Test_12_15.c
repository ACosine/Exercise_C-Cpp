#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//ָ�뺯���������ַ�ָ����Ϊ�βΣ���������һ���ַ�ָ��
char* my_strcpy(char *strDest,const  char *strSrc)
{
	assert((strSrc != NULL) && (strDest != NULL));	//����
	char* p = strDest;//��������  
	while (*strDest++ = *strSrc++);//copy strSrc over strDest.����\0
	return p;//����Ŀ���ַ����׵�ַ
}

//const��������string����ַ�ָ����ָ����ַ������ܱ��ı�
int my_strlen( const char *string)
{
	int count=0;
	assert(string != NULL); //����
	while (*string)
	{
		string++;
		count++;
	}
	return count;
}

int main()
{
	
	char src[30];//Դ�ַ��������н�����־
	char dest[30];//Ŀ��ռ����㹻����ܱ�֤copy����

	printf("������Դ�ַ���\n");
	gets(src);
	printf("������Ŀ���ַ���\n");
	gets(dest);

    int leng1 = my_strlen(src);
	int leng2 = my_strlen(dest);
	printf("Դ�ַ�������Ϊ%d\n", leng1);
	printf("Ŀ���ַ�������Ϊ%d\n", leng2);

	printf("��Դ�ַ���������Ŀ���ַ�����\n");
	my_strcpy(dest, src);
	printf("%s\n", dest);
	
	return 0;
}