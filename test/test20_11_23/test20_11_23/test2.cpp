#define _CRT_SECURE_NO_WARNINGS 1  


/*�������Ҫ˼·��̰���㷨����֤ÿ��ĵڶ���ֵȡ������
//����Ȼ��ȡ �� 3n - 1 3n - 3 3n - 5...��Ԫ���ۼӼ��� 
���� ��������� �� 1 2 5 5 8 9 ����ôȡ 8 �� 5��ӵ��� 13 
����ÿ�ξ���ȡ��󣬵�������������������λ���������˶�����Σ�ȡ ÿ���еڶ���� */


#include <iostream>
#include <vector>
#include<algorithm>  //ע��������㷨ͷ�ļ�
using namespace std;
int main()
{
	int n;
	while (cin >> n) // ѭ������
	{
		long sum = 0;
		//����3*n������
		vector<int> array(3 * n);
		for (int i = 0; i < (3 * n); ++i)
		{
			cin >> array[i];
		}
		//����
		sort(array.begin(), array.end());

		//̰���㷨���
		for (int i = n; i < 3 * n - 2; i += 1)
		{
			sum += array[i];
		}
		//���ˮƽֵ�ܺ�
		cout << sum << endl;
	}
		return 0;
}