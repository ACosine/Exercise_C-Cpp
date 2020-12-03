/*             反证法
二维数组中要使sqrt((x1-x2)^2+(y1-y2)^2)！=2
只需要遍历找(x1-x2)^2+(y1-y2)^2=4的位置，不满足此条件的地方都可以放蛋糕
只有下面两种情况，即计算x、y的相对位置平方和等于4
0+2^2=4            2^2+0=4
#*#***     或者    #*****
******            ******
******            #*****
******            ******
那么标记数组arr[i][j]元素的相对位置为1

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