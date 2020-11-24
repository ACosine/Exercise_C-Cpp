#define _CRT_SECURE_NO_WARNINGS 1  


/*本题的主要思路是贪心算法，保证每组的第二个值取到最大就
//排序，然后取 第 3n - 1 3n - 3 3n - 5...个元素累加即可 
例如 现在排序后 有 1 2 5 5 8 9 ，那么取 8 和 5相加等于 13 
我们每次尽量取最大，但是最大的数不可能是中位数，所以退而求其次，取 每组中第二大的 */


#include <iostream>
#include <vector>
#include<algorithm>  //注意包含此算法头文件
using namespace std;
int main()
{
	int n;
	while (cin >> n) // 循环输入
	{
		long sum = 0;
		//输入3*n个整数
		vector<int> array(3 * n);
		for (int i = 0; i < (3 * n); ++i)
		{
			cin >> array[i];
		}
		//排序
		sort(array.begin(), array.end());

		//贪心算法求和
		for (int i = n; i < 3 * n - 2; i += 1)
		{
			sum += array[i];
		}
		//输出水平值总和
		cout << sum << endl;
	}
		return 0;
}