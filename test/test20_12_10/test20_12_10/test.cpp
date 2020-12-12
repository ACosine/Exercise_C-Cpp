#include<iostream>
using namespace std;
//class A
//{
//public:
//	void f()
//	{
//		printf("A\n");
//	}
//};
//class B :public A
//{
//public:
//	virtual void f()
//	{
//		printf("B\n");
//	}
//};
//int main()
//{
//	A* a = new B;
//	a->f();
//	delete a;
//	return 0;
//}


//class A
//{
//public:
//	A()
//	{
//		printf("A ");
//	}
//	~A()
//	{
//		printf("deA ");
//	}
//};
//
//class B
//{
//public:
//	B()
//	{
//		printf("B ");
//	}
//	~B()
//	{
//		printf("deB ");
//	}
//};
//class C:public A,public B
//{
//public:
//	C()
//	{
//		printf("C ");
//	}
//	~C()
//	{
//		printf("deC ");
//	}
//};
//int main()
//{
//	A* a = new C();
//	delete a;
//	return 0;
//}




int main()
{
	int num;
	while (cin >> num)
	{
		int n = 1, res = 0;
		while (num)
		{
			if ((num & n) == 1)
			{
				res++;
			}
			num = num >> 1;
		}
		cout << res << endl;
	}
	return 0;
}