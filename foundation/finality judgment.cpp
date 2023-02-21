/* Alkaid#3529 */

#include<iostream>
using namespace std;

/* 判断一个数字是否为完数 */
bool determining_completion(int n); // 函数声明放在开头是一个良好的习惯

int main()
{

	// 读入范围的上下限
	int a = 0, b = 0;
	cout << "请输入需要判断的范围 ( a-b ) :\n";
	cout << "a = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;

	cout << "\nFrom " << a << " to " << b << " 完数有:\n\n";

	int num = 0;

	// 循环判断范围内的每个数字，如果为完数，输出
	for (int i = a; i < b + 1; i++)
	{
		if (determining_completion(i))
		{
			// 记录完数的个数
			num++;

			// 输出完数
			cout << i << "  ";

		}

	}

	cout << "\n\n共计 " << num << " 个\n";

	return 0;

	return 0;
}

bool determining_completion(int n)
{
	int sum = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}

	if (sum == n)
		return 1;
	else
		return 0;
}