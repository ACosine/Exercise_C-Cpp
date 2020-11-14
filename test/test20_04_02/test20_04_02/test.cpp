#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>

int main()
{
	//char a = 3;
	//char b = 127;
	//char c = a + b;
	//printf("%d\n", c);


	//const  int a = 10;
	//const int& ra = a;
	//
	//printf("%d\n", a);
	//printf("%d\n", ra);
	//printf("%p\n", &a);
	//printf("%p\n", &ra);
	//printf("%p\n", &rb);
	//printf("%p\n", &b);
	
	double b = 12.34;
    const int & rb = b;

	printf("%f\n", b);
	printf("%f\n", rb);

	b = 32.34;
	printf("%f\n", b);
	printf("%f\n", rb);


	return 0;
}