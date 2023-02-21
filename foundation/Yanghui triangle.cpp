/* Alkaid#3529 */

#include<iostream>
using namespace std;

// 计算 n 的阶乘
int factorial(int n);

// 计算组合数
int combination(int n, int m);

// 根据指定层数 n ，以直角形式，输出杨辉三角
void yang_hui_tiangle_right_angle(int floor);

// 根据指定层数 n ，以等腰形式，输出杨辉三角
void yang_hui_tiangle_isosceles(int floor);

int main()
{
	int floor = 0;


	// 读取需要输出的层数 floor
	cout << "请输入需要打印的层数:\n";
	cout << "floor = ";
	cin >> floor;

	// 以直角三角形的形式输出杨辉三角
	cout << "\n杨辉三角直角形式:\n";
	yang_hui_tiangle_right_angle(floor);

	// 以等腰三角形的形式输出杨辉三角
	cout << "\n杨辉三角等腰形式:\n";
	yang_hui_tiangle_isosceles(floor);

	return 0;

}

int factorial(int n)
{
	// ans 记录计算结果
	int ans = 1;

	// i 从 n 到 0 ，逐项相乘，ans 即为最终结果
	for (int i = n; i > 0; i--)
	{
		ans = ans * i;
	}

	return ans;
}

int combination(int n, int m)
{
	// 根据组合数的公式，用 ans 记录计算结果
	int ans = 0;

	// 第一步，ans = n!
	ans = factorial(n);

	// 第二步，ans = (n!)/(n-m)!
	ans = ans / factorial(n - m);

	// 第三步，ans = (n!)/((n-m)! * m!)
	ans = ans / factorial(m);

	return ans;
}

void yang_hui_tiangle_right_angle(int floor)
{
	for (int i = 0; i < floor; i++) // i 为需要输出的行数，从 0 开始，每一行从小到大再到小
	{
		for (int j = 0; j < (i + 1) / 2; j++) // 首先输出从小到大前半行
		{
			if (combination(i, j) < 10)
				cout << "  " << combination(i, j) << " ";
			else if (combination(i, j) < 100)
				cout << " " << combination(i, j) << " ";
			else
				cout << combination(i, j) << " ";
		}
		for (int j = i / 2; j >= 0; j--) // 首先输出从大到小后半行
		{
			if (combination(i, j) < 10)
				cout << "  " << combination(i, j) << " ";
			else if (combination(i, j) < 100)
				cout << " " << combination(i, j) << " ";
			else
				cout << combination(i, j) << " ";
		}
		cout << endl;


	}

	return;
}

void yang_hui_tiangle_isosceles(int floor)
{
	for (int i = 0; i < floor; i++)
	{
		for (int j = 0; j < floor - i - 1; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < (i + 1) / 2; j++)
		{
			if (combination(i, j) < 10)
				cout << "  " << combination(i, j) << " ";
			else if (combination(i, j) < 100)
				cout << " " << combination(i, j) << " ";
			else
				cout << combination(i, j) << " ";
		}
		for (int j = i / 2; j >= 0; j--)
		{
			if (combination(i, j) < 10)
				cout << "  " << combination(i, j) << " ";
			else if (combination(i, j) < 100)
				cout << " " << combination(i, j) << " ";
			else
				cout << combination(i, j) << " ";
		}
		cout << endl;


	}

	return;
}