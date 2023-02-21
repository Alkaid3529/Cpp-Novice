/* Alkaid#3529 */

#include<iostream>
using namespace std;

// ���� n �Ľ׳�
int factorial(int n);

// ���������
int combination(int n, int m);

// ����ָ������ n ����ֱ����ʽ������������
void yang_hui_tiangle_right_angle(int floor);

// ����ָ������ n ���Ե�����ʽ������������
void yang_hui_tiangle_isosceles(int floor);

int main()
{
	int floor = 0;


	// ��ȡ��Ҫ����Ĳ��� floor
	cout << "��������Ҫ��ӡ�Ĳ���:\n";
	cout << "floor = ";
	cin >> floor;

	// ��ֱ�������ε���ʽ����������
	cout << "\n�������ֱ����ʽ:\n";
	yang_hui_tiangle_right_angle(floor);

	// �Ե��������ε���ʽ����������
	cout << "\n������ǵ�����ʽ:\n";
	yang_hui_tiangle_isosceles(floor);

	return 0;

}

int factorial(int n)
{
	// ans ��¼������
	int ans = 1;

	// i �� n �� 0 ��������ˣ�ans ��Ϊ���ս��
	for (int i = n; i > 0; i--)
	{
		ans = ans * i;
	}

	return ans;
}

int combination(int n, int m)
{
	// ����������Ĺ�ʽ���� ans ��¼������
	int ans = 0;

	// ��һ����ans = n!
	ans = factorial(n);

	// �ڶ�����ans = (n!)/(n-m)!
	ans = ans / factorial(n - m);

	// ��������ans = (n!)/((n-m)! * m!)
	ans = ans / factorial(m);

	return ans;
}

void yang_hui_tiangle_right_angle(int floor)
{
	for (int i = 0; i < floor; i++) // i Ϊ��Ҫ������������� 0 ��ʼ��ÿһ�д�С�����ٵ�С
	{
		for (int j = 0; j < (i + 1) / 2; j++) // ���������С����ǰ����
		{
			if (combination(i, j) < 10)
				cout << "  " << combination(i, j) << " ";
			else if (combination(i, j) < 100)
				cout << " " << combination(i, j) << " ";
			else
				cout << combination(i, j) << " ";
		}
		for (int j = i / 2; j >= 0; j--) // ��������Ӵ�С�����
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