#define _CRT_SECURE_NO_WARNINGS 1  
#include<iostream>
using namespace std;
class Base
{
	static{
		system.out.printf("a");

	}
		
private:
		int x = getX();
private:
		int getX()
		{
			system.out.printf("b");
			return 0;
		}
public:
	Base()
		{
			system.out.printf("c");
		}
};

class ExBase extends Base
{
	static
	{
		system.out.printf("d");
	}
public:
		ExBase()
		{
			system.out.printf("e");
		}
};
public
	class Test
{
	public static void main(string[] args){
		Base a = new ExBase();
	}

};