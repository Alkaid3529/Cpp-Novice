/* Alkaid#3529 */

#include<iostream>
using namespace std;

/* �ж�һ�������Ƿ�Ϊ���� */
bool determining_prime_number(int n);

int main()
{
	// ���뷶Χ��������
	int a = 0, b = 0;
	cout << "��������Ҫ�жϵķ�Χ ( a-b ) :\n";
	cout << "a = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;

	cout << "\nFrom " << a << " to " << b << " ������:\n\n";

	int num = 0;

	// ѭ���жϷ�Χ�ڵ�ÿ�����֣����Ϊ���������
	for (int i = a; i < b + 1; i++)
	{
		if (determining_prime_number(i))
		{
			// ��¼�����ĸ���
			num++;

			// �������
			cout << i << "  ";

			// ÿʮ������Ϊһ��
			if (num % 10 == 0)
				cout << endl;
		}

	}

	cout << "\n\n���� " << num << " ��\n";

	return 0;
}

bool determining_prime_number(int n)
{
	// �� 2 �� sqrt(n) ���ֱ�� n �����������򷵻� 0 ��Ϊ��
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}

	// ���򣬷��� 1 ��Ϊ��
	return 1;
}