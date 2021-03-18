//������������n��m,������1,2,3��n������ȡ������ʹ��͵���m
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
		find(n - 1, m - n, flag, leng); //ѡ��n
		flag[n - 1] = 0;
		find(n - 1, m, flag, leng);     //��ѡn
	}
	else
	{
		flag[m - 1] = 1; //n >= m,ѡ��m���ɣ�n = m��
		for (int i = 0; i < leng; i++)
		{
			if (flag[i] == 1)
			{
				cout << i + 1 << " ";
			}
		}
		cout << endl;
		flag[m - 1] = 0; //��ѡm�������ݹ顣����n = 10, m = 8,���{1,7}�����������{1,3,4}��{1,2,5}���ǽ�
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