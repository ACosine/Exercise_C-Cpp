//#define _CRT_SECURE_NO_WARNINGS 1  
//µ¹ÖÃ×Ö·û´®
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	cin >> str1;
	while (cin >> str2)
	{
		str1.insert(0, " ");
		str1.insert(0, str2);
	}


	cout << str1 << endl;
	return 0;
}