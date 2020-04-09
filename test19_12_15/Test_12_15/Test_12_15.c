#include<stdio.h>
#include<string.h>
#include<assert.h>
//指针函数，两个字符指针作为形参，函数返回一个字符指针
char* my_strcpy(char *strDest,const  char *strSrc)
{
	char* p = strDest;//保护参数  
	assert((strSrc != NULL) && (strDest != NULL));	//断言
	while (*strDest++ = *strSrc++);
	
	return strDest;
}
//int my_strlen( const char *string)//const参数保护 string这个字符指针所指向的字符串不能被改变
//{
//	int count=0;
//	assert(string != NULL); //断言
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