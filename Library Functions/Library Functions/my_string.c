#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
/*********************************************1.模拟实现my_strlen**************************************/
//int my_strlen1(const char* arr)//计数法
//{
//	assert(arr);
//	int leng=0;
//	while (*arr++) 
//		// 1.*arr 2.arr++(注意后++的结合性高于*，但它是后++)
//	{
//		leng++;
//	}
//	return leng;
//}
//int my_strlen2(const char* arr)//指针法
//{
//	assert(arr);
//	int leng = 0;
//	const char* p = arr;
//	while (*p != 0) //找到\0
//	{
//		p++;
//	}
//	return (p - arr);
//}
////递归思路：
////"abc\0"   
////1 + my_strlen3("bc\0")
////1 + 1 + my_strlen3("c\0")
////1 + 1 + 1 + my_strlen3("\0")
////1 + 1 + 1 + 0
//int my_strlen3(const char* arr)//递归法，不创建第三变量
//{
//	assert(arr);
//	if (*arr == 0)
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen3(++arr);//此处需前加加
//}
//int main()//库函数strlen()返回的是无符号整型
//{
//	char arr[30];
//	gets(arr);
//
//	int leng = my_strlen3(arr);
//	printf("leng=%d\n", leng);
//	return 0;
//}
/*********************************************2.模拟实现my_strcpy**************************************/
//char* my_strcpy(char* destination, const char* source)
//	
//{
//	assert(destination && source);
//	char *p = destination;//参数保护
//	while (*destination++ = *source++);
//	return p;
//}
//int main()
//{
//	//Destination可变且足够大,Source必须有结束标志
//	char Source[30];
//	char Destination[30];
//
//	printf("请输入源字符串Source:\n");
//	gets(Source);
//	printf("请输入源字符串Destination:\n");
//	gets(Destination);
//
//	my_strcpy(Destination, Source);
//	puts(Destination);
//	return 0;
//}
/*********************************************3.模拟实现my_strcat**************************************/
//char* my_strcat(char* destination, const char*source)
//{
//	assert(destination && source);
//	char *p = destination;
//	//1.找目标字符串\0
//	while (*p != 0)
//	{
//		p++;
//	}
//	//2.追加(copy)源字符串
//	while (*p++ = *source++);
//	//3.返回
//	return destination;
//}
//int main()
//{
//	//Destination可变且足够大,两者必须都有结束标志
//	char Source[30];
//	char Destination[30];
//
//	printf("请输入源字符串Source:\n");
//	gets(Source);
//
//	printf("请输入目标字符串Destination:\n");
//	gets(Destination);
//
//	my_strcat(Destination, Source);
//	puts(Destination);
//	return 0;
//}
/*********************************************4.模拟实现my_strcmp**************************************/
int my_strcmp(const char* arr1,const char* arr2)
{
	assert(arr1&&arr2);
	//比较
	while (*arr1==*arr2)
	{
		if (*arr1 == 0)
			return 0;
		arr1++;
		arr2++;
	}
	 return arr1 - arr2;  
	 //arr1>arr2   返回>0的数
	 //arr1==arr2   返回0
	 //arr1<arr2   返回<0的数
}
int main()
{
	char arr1[20];
	char arr2[20];

	printf("请输入源字符串arr1:\n");
	gets(arr1);
	printf("请输入源字符串arr2:\n");
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
