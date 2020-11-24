#define _CRT_SECURE_NO_WARNINGS 1  
/***********************删除公共字符********************/
/* 暴力法：采用暴力查找方式
   如判断第一个串的字符是否在第二个串中，
   若不在则将该字符存到一个新字符串中的方式 */



#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2, str3;   //创建string类对象
	getline(cin, str1);       //通过getline将回车前的输入流读到str1当中
	getline(cin, str2);
	int i = 0;
	while(str1[i])   //遍历str1中的每一个元素
	{
		if (str2.find(str1[i], 0) == str2.npos)  //在str2中find查找字符str1[i],未找到会返回npos
		{
			str3 += str1[i];  //str1[i]在str2并没有出现，则将str1[i]赋给str3
		}
			i++;
	}
	cout << str3 << endl;
	return 0;
}
