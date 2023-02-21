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
	cout << "在测试函数 test 中，*p = " << *p << endl;
	delete p;

	int* a = func_0();
	cout << "在测试函数 test 中，*a = " << *a << endl;


	int* arr = func_1();

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	cout << "数组值依次为：";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}

	delete[] arr;

	return;
}

int main()
{
	// 代码区存放编写的代码，以二进制存储，共享但是只可读不可写

	// 全局区存放全局变量，静态变量，字符串常量，const修饰的全局变量
	cout << "全局变量g_a的地址为：" << &g_a << endl;
	cout << "全局变量g_b的地址为：" << &g_b << endl;

	cout << "静态全局变量s_g_a的地址为：" << &s_g_a << endl;
	cout << "静态全局变量s_g_b的地址为：" << &s_g_b << endl;

	static int s_l_a = 10;
	static int s_l_b = 10;

	cout << "静态局部变量s_l_a的地址为：" << &s_l_a << endl;
	cout << "静态局部变量s_l_b的地址为：" << &s_l_b << endl;

	cout << "字符串常量ABCD的地址为：" << &"ABCD" << endl;
	cout << "字符串常量BCDE的地址为：" << &"BCDE" << endl;

	cout << "const修饰的全局变量c_g_a的地址为：" << &c_g_a << endl;
	cout << "const修饰的全局变量c_g_b的地址为：" << &c_g_b << endl;

	// 栈区存放函数的参数，const修饰的局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << &a << endl;
	cout << "局部变量b的地址为：" << &b << endl;

	const int c_a = 10;
	const int c_b = 10;

	cout << "const修饰的局部变量c_a的地址为：" << &c_a << endl;
	cout << "const修饰的局部变量c_b的地址为：" << &c_b << endl;


	// 堆区存放自行开辟的空间

	test();



	return 0;

}