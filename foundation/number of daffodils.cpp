/* Alkaid#3529 */

#include<iostream>
using namespace std;

bool narcissus(int a);

int main()
{
	cout << "ˮ�ɻ�����:  \n";

	// ��100��ʼ��������������λ��
	for (int i = 100; i < 1000; i++)
	{
		if (narcissus(i))
			cout << i << endl;
	}

	return 0;
}

bool narcissus(int a)
{
	int sum = 0; // ��¼������ͽ��

	int x1 = a / 100; // ԭ������100��Ϊ��λ
	int x2 = a % 100 / 10; // ԭ��ģ100�󣬳���10����ʮλ��
	int x3 = a % 10; // ģ10�Ľ�����Ǹ�λ��

	// �Եõ��ĸ�λ�������������
	sum = x1 * x1 * x1 + x2 * x2 * x2 + x3 * x3 * x3;

	// �ж���ͽ����ԭ���Ƿ����
	if (sum == a)
		return 1;
	else
		return 0;
}