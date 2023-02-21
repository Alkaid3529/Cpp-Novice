/* Alkaid#3529 */

#include<iostream>
using namespace std;

bool narcissus(int a);

int main()
{
	cout << "水仙花数有:  \n";

	// 从100开始，逐个检查所有三位数
	for (int i = 100; i < 1000; i++)
	{
		if (narcissus(i))
			cout << i << endl;
	}

	return 0;
}

bool narcissus(int a)
{
	int sum = 0; // 记录最终求和结果

	int x1 = a / 100; // 原数除以100即为百位
	int x2 = a % 100 / 10; // 原数模100后，除以10就是十位数
	int x3 = a % 10; // 模10的结果就是个位数

	// 对得到的各位数的三次幂求和
	sum = x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3;

	// 判断求和结果与原数是否相等
	if (sum == a)
		return 1;
	else
		return 0;
}