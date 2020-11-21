#define _CRT_SECURE_NO_WARNINGS 1  
#include <iostream>
using namespace std;

// 每个类"成员函数"都有一个默认的参数，该参数时时刻刻指向调用该成员函数的对象，将该参数称为this指针
// 注意：该隐藏的this指针是编译器在编译类的期间自动加上的,因此用户不需要添加，也不需要传递

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
	// 属性：用来描述学生的基本信息的
	char _name[20];
	char _gender[3];
	int  _age;
};
int main()
{
	Student s1, s2;
	cout << sizeof(s1) << endl;

	cout << &s1 << endl;
	s1.SetStudentInfo("李明", "男", 13);

	cout << &s2 << endl;
	s2.SetStudentInfo("韩梅", "女", 12);


	s1.PrintStudentInfo();
	s2.PrintStudentInfo();

	return 0;
}

/*
上述是用户写的代码，经过编译器器修改之后，代码就变成
// 在C语言中，我们代码怎么写，编译器就怎么做，几乎不对代码进行任何修改--你看到的就是编译器执行的
// 用C语言来模拟时间上述代码
struct Student
{
char name[20];
char gender[3];
int age;
};


// 要将name、gender、age数据设置到ps指向的学生信息中
void SetStudentInfo(Student* this, char name[], char gender[], int age)
{
strcpy(this->name, name);
strcpy(this->gender, gender);
this->age = age;
}

// 打印ps指向的学生
void PrintSutdentInfo(Student* this)
{
printf("%s %s %d", this->name, this->gender, this->age);
}

int main()
{
Student s1, s2, s3;
SetStudentInfo(&s1, "熊大", "公", 5);
SetStudentInfo(&s2, "熊二", "母", 4);
SetStudentInfo(&s3, "强哥", "男", 28);

PrintSutdentInfo(&s1);
PrintSutdentInfo(&s2);
PrintSutdentInfo(&s3);
return 0;
}
*/
