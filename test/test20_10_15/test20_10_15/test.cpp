#define _CRT_SECURE_NO_WARNINGS 1  
#include<iostream>

using namespace std;
int main()
{
	const int a = 10;
	//C++�б�const���εı����Ѿ��ǳ��������к��滻����
	int* pa = (int*)&a;
	*pa = 100;
	cout << *pa << endl;
	cout << a << endl;
	return 0;
}