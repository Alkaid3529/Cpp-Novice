#include<iostream>
using namespace std;

class A_print
{

public:

	//重载小括号，使用效果与函数调用十分相似，因此称为仿函数
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

	//与函数调用类似
	a("hellloworld");

	A_add b;
	cout << b(10, 20) << endl;

	//匿名函数对象
	cout << A_add()(100, 100) << endl;

}

int main()
{
	test();

	return 0;
}