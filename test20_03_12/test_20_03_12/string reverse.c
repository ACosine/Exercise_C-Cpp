#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse1(char *arr)
{
	assert(arr);
	char* right = arr + strlen(arr) - 1;
	char* lift = arr;
	while (lift<right)
	{
		char temp = * right;
		*right = *lift;
		*lift = temp;
		right--;
		lift++;
	}
}
//void reverse2(char arr[])
//{
//	assert(arr);
//	int right = strlen(arr) - 1;
//	int lift = 0;
//	while (lift < right)
//	{
//		char temp = arr[right];
//		arr[right] = arr[lift];
//		arr[lift] = temp;
//		lift++;
//		right--;
//	}
//}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	
	reverse1(arr);
	puts(arr);

	//reverse2(arr);
	//puts(arr);
	
	return 0;
}