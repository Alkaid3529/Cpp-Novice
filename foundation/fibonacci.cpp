/* Alkaid#3529 */

#include <iostream>
#include<windows.h>
using namespace std;

/* 输出斐波那契额数列的前n项  循环方式 */
int fibonacci_circulate(int n);

/* 输出斐波那契额数列的前n项  递归方式 */
int fibonacci_recursion(int n);

int main()
{
	int n;

	cout << "请输入fibonacci数列的项数:\n";

	for (;;)
	{
		cin >> n;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "输入错误";
		}
		else
			break;
	}


	DWORD start_time_circulate = GetTickCount64();
	{
		cout << "\n通过循环可得:\n";
		cout << "fibonacci数列第" << n << "项为:" << fibonacci_circulate(n) << endl;
	}
	DWORD end_time_circulate = GetTickCount64();
	cout << "The run time is: " << (end_time_circulate - start_time_circulate) << " ms!" << endl;


	DWORD start_time_recursion = GetTickCount64();
	{
		cout << "\n通过递归可得:\n";
		cout << "fibonacci数列第" << n << "项为:" << fibonacci_recursion(n) << endl;
	}
	DWORD end_time_recursion = GetTickCount64();
	cout << "The run time is: " << (end_time_recursion - start_time_recursion) << " ms!" << endl;


	return 0;
}

int fibonacci_circulate(int n)
{
	long long f1 = 1, f2 = 1;

	int time = (n + 1) / 2;

	for (int i = 1; i < time; i++)
	{
		f1 = f1 + f2;
		f2 = f2 + f1;
	}

	if (n % 2 == 0)
		return f2;
	else
		return f1;
}

int fibonacci_recursion(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	else
		return fibonacci_recursion(n - 1) + fibonacci_recursion(n - 2);
}
