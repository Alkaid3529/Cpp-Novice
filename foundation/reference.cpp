#include<iostream>
using namespace std;

//������������Ч�����ַ��ͬ
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	return;
}

//��������������ֵ
//��Ҫ���ؾֲ����������ã���ջ��
int& test()
{
	static int a = 10;
	return a;
}

int main()
{
	int a = 10;
	int c = 20;

	//�����ʼ��
	int& b = a;

	//���ɸ���
	//int& b = c;
	b = c; //��ֵ

	cout << b << endl;

	b = 100;

	cout << a << endl;

	cout << &b << "  " << &a << endl;


	a = 10, c = 20;

	cout << a << "  " << c << endl;

	swap(a, c);
	cout << a << "  " << c << endl;

	int& ref = test();
	cout << ref << endl;

	//��������Ϊ����ʱ��������Ϊ��ֵ
	test() = 100;
	cout << ref << "  " << test() << endl;

	//���ñ���Ϊָ�볣��

	int& ref_a = a; //��ЧΪ int *const ref = &a; ��˲����޸�ָ�����

	//�������õ�ʹ�ó����������βΣ���ֹ������ı����õ�ֵ

	// ʵ��Ϊint temp = 10; const int& ref = temp;
	const int& ref = 10; //��������һ��Ϸ��ռ�



	return 0;

}
