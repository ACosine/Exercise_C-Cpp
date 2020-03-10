#include<stdio.h>
#include<string.h>
#include<assert.h>

char *my_strcpy(char *strDest, char *strSrc)
{	
	int count1 = 0;
	int count2 = 0;
	assert((strSrc != NULL)&&(strDest!=NULL));
	//保护参数  
	while (strSrc != '\0')
	{
		*strDest = *strSrc;
		count1++;
		count2++;
	}
	*strDest = '\0';
	
	return strDest;
}
//int my_size(char *string)
//{
//
//	assert(string != NULL);
//	int count = 0;
//	while (*string!= "\0")
//	{
//	  count++;
//	}
//}
int main()
{
	char dest[] = "hellobit";
	char *src = "Bit.";
		//int len;
		//len = my_size(str);
	printf("dest=%s", dest);
	my_strcpy(dest, src);
	//printf("len=%d", len);
	printf("dest=%s", dest);
	return 0;
}