#define _CRT_SECURE_NO_WARNINGS 1  
#include <iostream>
using namespace std;

// ÿ����"��Ա����"����һ��Ĭ�ϵĲ������ò���ʱʱ�̿�ָ����øó�Ա�����Ķ��󣬽��ò�����Ϊthisָ��
// ע�⣺�����ص�thisָ���Ǳ������ڱ�������ڼ��Զ����ϵ�,����û�����Ҫ��ӣ�Ҳ����Ҫ����

class Student
{
public:
	void SetStudentInfo(char name[], char gender[], int age)
	 	{
	 	//	cout << this << endl;
	 		strcpy(_name, name);
	 		strcpy(_gender, gender);
	 		_age = age;
	 	}

	void PrintStudentInfo()
		{
			cout << _name << "-" << _gender << "-" << _age << endl;
		}
public:
	// ���ԣ���������ѧ���Ļ�����Ϣ��
	char _name[20];
	char _gender[3];
	int  _age;
};
int main()
{
	Student s1, s2;
	cout << sizeof(s1) << endl;

	cout << &s1 << endl;
	s1.SetStudentInfo("����", "��", 13);

	cout << &s2 << endl;
	s2.SetStudentInfo("��÷", "Ů", 12);


	s1.PrintStudentInfo();
	s2.PrintStudentInfo();

	return 0;
}

/*
�������û�д�Ĵ��룬�������������޸�֮�󣬴���ͱ��
// ��C�����У����Ǵ�����ôд������������ô�����������Դ�������κ��޸�--�㿴���ľ��Ǳ�����ִ�е�
// ��C������ģ��ʱ����������
struct Student
{
char name[20];
char gender[3];
int age;
};


// Ҫ��name��gender��age�������õ�psָ���ѧ����Ϣ��
void SetStudentInfo(Student* this, char name[], char gender[], int age)
{
strcpy(this->name, name);
strcpy(this->gender, gender);
this->age = age;
}

// ��ӡpsָ���ѧ��
void PrintSutdentInfo(Student* this)
{
printf("%s %s %d", this->name, this->gender, this->age);
}

int main()
{
Student s1, s2, s3;
SetStudentInfo(&s1, "�ܴ�", "��", 5);
SetStudentInfo(&s2, "�ܶ�", "ĸ", 4);
SetStudentInfo(&s3, "ǿ��", "��", 28);

PrintSutdentInfo(&s1);
PrintSutdentInfo(&s2);
PrintSutdentInfo(&s3);
return 0;
}
*/
