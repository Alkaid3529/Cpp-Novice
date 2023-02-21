/* Alkaid#3529 */

#include<iostream>
using namespace std;

/* 判断一个数字是否为素数 */
bool determining_prime_number(int n);

int main()
{
	// 读入范围的上下限
	int a = 0, b = 0;
	cout << "请输入需要判断的范围 ( a-b ) :\n";
	cout << "a = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;

	cout << "\nFrom " << a << " to " << b << " 素数有:\n\n";

	int num = 0;

	// 循环判断范围内的每个数字，如果为素数，输出
	for (int i = a; i < b + 1; i++)
	{
		if (determining_prime_number(i))
		{
			// 记录素数的个数
			num++;

			// 输出素数
			cout << i << "  ";

			// 每十个数字为一行
			if (num % 10 == 0)
				cout << endl;
		}

	}

	cout << "\n\n共计 " << num << " 个\n";

	return 0;
}

bool determining_prime_number(int n)
{
	// 从 2 到 sqrt(n) ，分别除 n ，若整除，则返回 0 ，为假
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}

	// 否则，返回 1 ，为真
	return 1;
}