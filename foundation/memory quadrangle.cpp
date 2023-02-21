#include<iostream>

using namespace std;

int g_a = 10;
int g_b = 10;

static int s_g_a = 10;
static int s_g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int* func_0()
{
	int* p = new int(10);

	return p;
}

int* func_1()
{
	int* p = new int[10];

	return p;
}

void test()
{
	int* p = func_0();
	cout << "�ڲ��Ժ��� test �У�*p = " << *p << endl;
	delete p;

	int* a = func_0();
	cout << "�ڲ��Ժ��� test �У�*a = " << *a << endl;


	int* arr = func_1();

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	cout << "����ֵ����Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}

	delete[] arr;

	return;
}

int main()
{
	// ��������ű�д�Ĵ��룬�Զ����ƴ洢��������ֻ�ɶ�����д

	// ȫ�������ȫ�ֱ�������̬�������ַ���������const���ε�ȫ�ֱ���
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << &g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << &g_b << endl;

	cout << "��̬ȫ�ֱ���s_g_a�ĵ�ַΪ��" << &s_g_a << endl;
	cout << "��̬ȫ�ֱ���s_g_b�ĵ�ַΪ��" << &s_g_b << endl;

	static int s_l_a = 10;
	static int s_l_b = 10;

	cout << "��̬�ֲ�����s_l_a�ĵ�ַΪ��" << &s_l_a << endl;
	cout << "��̬�ֲ�����s_l_b�ĵ�ַΪ��" << &s_l_b << endl;

	cout << "�ַ�������ABCD�ĵ�ַΪ��" << &"ABCD" << endl;
	cout << "�ַ�������BCDE�ĵ�ַΪ��" << &"BCDE" << endl;

	cout << "const���ε�ȫ�ֱ���c_g_a�ĵ�ַΪ��" << &c_g_a << endl;
	cout << "const���ε�ȫ�ֱ���c_g_b�ĵ�ַΪ��" << &c_g_b << endl;

	// ջ����ź����Ĳ�����const���εľֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַΪ��" << &a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << &b << endl;

	const int c_a = 10;
	const int c_b = 10;

	cout << "const���εľֲ�����c_a�ĵ�ַΪ��" << &c_a << endl;
	cout << "const���εľֲ�����c_b�ĵ�ַΪ��" << &c_b << endl;


	// ����������п��ٵĿռ�

	test();



	return 0;

}