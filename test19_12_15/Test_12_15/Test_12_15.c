#include<stdio.h>
#include<string.h>
#include<assert.h>
//ָ�뺯���������ַ�ָ����Ϊ�βΣ���������һ���ַ�ָ��
char* my_strcpy(char *strDest,const  char *strSrc)
{
	char* p = strDest;//��������  
	assert((strSrc != NULL) && (strDest != NULL));	//����
	while (*strDest++ = *strSrc++);
	
	return strDest;
}
//int my_strlen( const char *string)//const�������� string����ַ�ָ����ָ����ַ������ܱ��ı�
//{
//	int count=0;
//	assert(string != NULL); //����
//	while (*string)
//	{
//		string++;
//		count++;
//	}
//	return count;
//}
int main()
{
	char dest[] = "sun.";
	char src[] = "Hello Word";
 //   int leng = my_strlen(src);
	//printf("src my_strlen=%d\n", leng);
	
	my_strcpy(dest, src);
	printf("%s\n", dest);
	
	return 0;
}