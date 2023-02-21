#include<iostream>
using namespace std;

//引用做参数，效果与地址相同
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	return;
}

//引用做函数返回值
//不要返回局部变量的引用，在栈区
int& test()
{
	static int a = 10;
	return a;
}

int main()
{
	int a = 10;
	int c = 20;

	//必须初始化
	int& b = a;

	//不可更改
	//int& b = c;
	b = c; //赋值

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

	//函数调用为引用时，可以作为左值
	test() = 100;
	cout << ref << "  " << test() << endl;

	//引用本质为指针常量

	int& ref_a = a; //等效为 int *const ref = &a; 因此不可修改指向对象

	//常量引用的使用场景，修饰形参，防止误操作改变引用的值

	// 实际为int temp = 10; const int& ref = temp;
	const int& ref = 10; //必须引用一块合法空间



	return 0;

}
