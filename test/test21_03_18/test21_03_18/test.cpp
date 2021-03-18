//输入两个整数n和m,从数列1,2,3…n中随意取几个数使其和等于m
#include<iostream>
using namespace std;
void find(int n, int m, int *flag, int leng)
{
	if (n < 1 || m < 1)
	{
		return;
	}

	if (n < m)
	{
		flag[n - 1] = 1;
		find(n - 1, m - n, flag, leng); //选了n
		flag[n - 1] = 0;
		find(n - 1, m, flag, leng);     //不选n
	}
	else
	{
		flag[m - 1] = 1; //n >= m,选中m即可（n = m）
		for (int i = 0; i < leng; i++)
		{
			if (flag[i] == 1)
			{
				cout << i + 1 << " ";
			}
		}
		cout << endl;
		flag[m - 1] = 0; //不选m，继续递归。比如n = 10, m = 8,求出{1,7}后，仍需继续，{1,3,4}和{1,2,5}都是解
		find(m - 1, m, flag, leng);
	}
}

int main()
{

	int n, m;
	cin >> n >> m;

	int *flag = new int[n];
	for (int i = 0; i < n; i++)
	{
		flag[i] = 0;
	}

	find(n, m, flag, n);

	cout << endl;

	delete[] flag;

	return 0;
}