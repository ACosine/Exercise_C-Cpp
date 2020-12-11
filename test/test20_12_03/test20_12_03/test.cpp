#include <iostream>
using namespace std;
class Test
{
public:
	int a;
	int b;
	virtual void fun(){}
	Test(int temp1 = 0, int temp2 = 0)
	{
		a = temp1;
		b = temp2;
	}
	int getA()
	{
		return a;
	}
	int getB()
	{
		return b;
	}
};
int main()
{
	Test obj(5, 10);
	int* PInt = (int*)&obj;
	*(PInt + 0) = 100;
	*(PInt + 1) = 200;
	cout << "a=" << obj.getA() << endl;
	cout << "b=" << obj.getB() << endl;


	return 0;
}