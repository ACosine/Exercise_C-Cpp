#define _CRT_SECURE_NO_WARNINGS 1  
/***********************ɾ�������ַ�********************/
/* �����������ñ������ҷ�ʽ
   ���жϵ�һ�������ַ��Ƿ��ڵڶ������У�
   �������򽫸��ַ��浽һ�����ַ����еķ�ʽ */



#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2, str3;   //����string�����
	getline(cin, str1);       //ͨ��getline���س�ǰ������������str1����
	getline(cin, str2);
	int i = 0;
	while(str1[i])   //����str1�е�ÿһ��Ԫ��
	{
		if (str2.find(str1[i], 0) == str2.npos)  //��str2��find�����ַ�str1[i],δ�ҵ��᷵��npos
		{
			str3 += str1[i];  //str1[i]��str2��û�г��֣���str1[i]����str3
		}
			i++;
	}
	cout << str3 << endl;
	return 0;
}
