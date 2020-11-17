#define _CRT_SECURE_NO_WARNINGS 1  
#include<iostream>

using namespace std;
int main()
{
	const int a = 10;
	//C++中被const修饰的变量已经是常量，具有宏替换属性
	int* pa = (int*)&a;
	*pa = 100;
	cout << *pa << endl;
	cout << a << endl;
	return 0;
}