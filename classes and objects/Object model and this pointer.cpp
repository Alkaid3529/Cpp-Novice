#include<iostream>
using namespace std;

//成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上
//其余都不属于类的对象上

//this指针指向调用函数的对象
//本质上为指针常量，不可修改指向方向
//person const*this;


//this指针的作用：解决名称冲突

//const修饰成员函数，称为常函数
//mutable可以便于常函数访问成员

//对象声明前加const成为常对象
//常对象只能调用常函数

class person
{

public:
	//非静态成员变量
	int m_a;

	//静态成员变量不属于对象上
	static int m_s;

	//非静态成员函数不在对象上
	void func()
	{

	}

	//静态成员函数不在对象上
	static void func_s()
	{

	}

	person(int age)
	{
		//默认情况下只要调用静态成员变量都会有this指针
		//为防止错误输入，增加判断条件，提高代码健壮性
		//空指针可以访问成员，但可能导致错误
		if (this == NULL)
		{
			return;
		}

		this->age = age;
	}

	person& age_add(const person& p)
	{
		this->age += p.age;

		return *this;
	}

	//成员函数后加const，修饰this指针，使得指针指向方向的值也不可以修改
	void set_age(int a) const
	{
		//age++;
		weigth++;
	}

	int age;

	//特殊声明，使得此变量可以在常函数中修改此变量
	mutable int weigth;

};

void test()
{
	//空对象内存为1
	//为每个空对象分配一个字节，区分对象占内存的位置
	//每个空对象也应有独一无二的内存地址
	person p(18);

	cout << "sizeof(person) = " << sizeof(person) << endl;

	person p2(20);
	cout << p2.age << endl;


	//链式编程
	p2.age_add(p).age_add(p).age_add(p);

	cout << p2.age << endl;

	//常对象
	const person p_c(20);
	//常对象不可修改值
	//p_c.age = 20;

	//可以修改特殊声明的变量
	p_c.weigth = 20;

	//常对象只能调用常函数，不可以调用普通成员函数，因为普通成员函数可以调用普通成员变量
	p_c.set_age(10);
	//p_c.func();

	return;
}

int main()
{
	test();

	return 0;
}