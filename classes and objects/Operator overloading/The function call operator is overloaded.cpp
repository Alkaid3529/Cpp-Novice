#include<iostream>
using namespace std;

class A_print
{

public:

	//����С���ţ�ʹ��Ч���뺯������ʮ�����ƣ���˳�Ϊ�º���
	void operator()(string test)
	{
		cout << test << endl;
	}

};

class A_add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test()
{
	A_print a;

	//�뺯����������
	a("hellloworld");

	A_add b;
	cout << b(10, 20) << endl;

	//������������
	cout << A_add()(100, 100) << endl;

}

int main()
{
	test();

	return 0;
}