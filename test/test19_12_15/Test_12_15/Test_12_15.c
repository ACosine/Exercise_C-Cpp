#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//指针函数，两个字符指针作为形参，函数返回一个字符指针
char* my_strcpy(char *strDest,const  char *strSrc)
{
	assert((strSrc != NULL) && (strDest != NULL));	//断言
	char* p = strDest;//保护参数  
	while (*strDest++ = *strSrc++);//copy strSrc over strDest.包括\0
	return p;//返回目的字符串首地址
}

//const参数保护string这个字符指针所指向的字符串不能被改变
int my_strlen( const char *string)
{
	int count=0;
	assert(string != NULL); //断言
	while (*string)
	{
		string++;
		count++;
	}
	return count;
}

int main()
{
	
	char src[30];//源字符串必须有结束标志
	char dest[30];//目标空间需足够大才能保证copy得下

	printf("请输入源字符串\n");
	gets(src);
	printf("请输入目标字符串\n");
	gets(dest);

    int leng1 = my_strlen(src);
	int leng2 = my_strlen(dest);
	printf("源字符串长度为%d\n", leng1);
	printf("目标字符串长度为%d\n", leng2);

	printf("将源字符串拷贝至目标字符串中\n");
	my_strcpy(dest, src);
	printf("%s\n", dest);
	
	return 0;
}