/*             ��֤��
��ά������Ҫʹsqrt((x1-x2)^2+(y1-y2)^2)��=2
ֻ��Ҫ������(x1-x2)^2+(y1-y2)^2=4��λ�ã�������������ĵط������Էŵ���
ֻ���������������������x��y�����λ��ƽ���͵���4
0+2^2=4            2^2+0=4
#*#***     ����    #*****
******            ******
******            #*****
******            ******
��ô�������arr[i][j]Ԫ�ص����λ��Ϊ1

*/

#include<iostream>
using namespace std;
int main()
{
	int W, H;
	int arr[1000][1000] = { 0 };
	int ret = 0;
	while (cin >> W >> H)
	{
		for (int i = 0; i<H; ++i)
		{
			for (int j = 0; j<W; ++j)
			{

				if (arr[i][j] == 0)
				{

					if ((i + 2)<H) arr[i + 2][j] = 1;
					if ((j + 2)<W) arr[i][j + 2] = 1;
					ret++;
				}
			}
		}
	}
	cout << ret << endl;
	return 0;
}