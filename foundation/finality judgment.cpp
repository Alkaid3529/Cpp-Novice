/* Alkaid#3529 */

#include<iostream>
using namespace std;

/* �ж�һ�������Ƿ�Ϊ���� */
bool determining_completion(int n); // �����������ڿ�ͷ��һ�����õ�ϰ��

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
		if (determining_completion(i))
		{
			// ��¼�����ĸ���
			num++;

			// �������
			cout << i << "  ";

		}

	}

	cout << "\n\n���� " << num << " ��\n";

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