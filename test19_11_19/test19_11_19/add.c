#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
void main()
{
	int a = 0;
	//  VS2013 �����н����3 4 1 4  VC6.0 �����еĽ����2 2 1 1  
	printf("%d %d %d %d \n", a++, ++a, a++, ++a); 
	//int b = (a++)+(a++);    //0
	//int b = (++a) + (a++);  //2
	//int b = (a++) + (++a);  //2
	//int b = (a++) + (a++) + (a++); //0
	//int b = (++a) + (a++) + (a++);  //3
	//int b = (a++) + (a++) + (++a);  //3
	//printf("b=%d\n",b); 
	return NULL;
}


