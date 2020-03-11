#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
void main()
{
	int a = 0;
	printf("%d %d %d %d \n", a++, ++a, a++, ++a); //3 4 1 4 
	//int b = (a++)+(a++);    //0
	//int b = (++a) + (a++);  //2
	//int b = (a++) + (++a);  //2
	//int b = (a++) + (a++) + (a++); //0
	//int b = (++a) + (a++) + (a++);  //3
	//int b = (a++) + (a++) + (++a);  //3
	//printf("b=%d\n",b); 
	return NULL;
}


