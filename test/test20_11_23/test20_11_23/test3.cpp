#define _CRT_SECURE_NO_WARNINGS 1  
#include <iostream>
using namespace std;
//int main()
//{
//	int a;
//	int b;
//	cin >> a >> b;
//	cout << a + b << endl;
//	return 0;
//}

//int main()
//{
//	char a[20];
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}
//int main()
//{
//	char ch;
//	ch = cin.get(); //都只能获取一个字符
//	//cin.get(ch);
//	cout << ch << endl;
//	return 0;
//}

//int main()
//{
//	char a[20];
//	cin.get(a,5); //有些类似getline。可以输入多个单词，中间空格隔开。
//	cout << a << endl;
//	return 0;
//}



#include<string>

//int main()
//{
//	string str;
//	getline(cin, str);
//	cout << str << endl;
//	return 0;
//}
#include<string>
#include<stdio.h>
int main()
{
	string str;
	while (getline(cin,str))
	{
		cout << str << endl;
	}
	
}
