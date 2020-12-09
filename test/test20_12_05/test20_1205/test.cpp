#include <iostream>
using namespace std;
//int main()
//{
//	int n[][3] = { 10, 20, 30, 40, 50, 60 };
//	int(*p)[3];
//	p = n;
//	cout << p[0][0] << "," << *(p[0] + 1) << "," << (*p)[2] << endl;
//	return 0;
//}

void function(const int &v1, const int & v2)
{
	std::cout << v1 << ' ';
	std::cout << v2 << ' ';
}
int main()
{
	int i = 0;
	function(++i, i++);
	return 0;
}