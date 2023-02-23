#include<iostream>
using namespace std;

//父类 基类
class father
{
public:

	father()
	{
		m_a = 100;
		cout << "father 构造函数" << endl;
	}

	~father()
	{
		cout << "father 析构函数" << endl;
	}

	void func()
	{
		cout << "father.func()" << endl;
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}

	void func(int a)
	{
		cout << "father.func(int a)" << endl;
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}

	static void func_s()
	{
		cout << "father.func_s()" << endl;
		//m_c = 10;
	}

	static void func_s(int a)
	{
		cout << "father.func_s(int a)" << endl;
		//m_c = 10;
	}

public:
	int m_a;

protected:
	int m_b;

private:
	int m_c;

};

//子类 派生类
//继承 basepage 的全部属性
class son1 :public father
{
public:
	son1()
	{
		m_a = 200;
		cout << "son1 构造函数" << endl;
	}

	~son1()
	{
		cout << "son1 析构函数" << endl;
	}

public:
	void func()
	{
		cout << "s1.func()" << endl;
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}

	static void func_s()
	{
		cout << "s1.func_s()" << endl;
		//m_c = 10;
	}

	int m_a;
	int m_d;

};

class son2 :protected father
{

public:
	void func()
	{
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}

	int m_d;

};

class son3 :private father
{

public:
	void func()
	{
		m_a = 10;
		m_b = 10;
		//m_c = 10;
	}

	int m_d;


};

//多继承，同时继承父亲和爷爷
class grandson3 :public son3, public father
{

public:
	void func()
	{
		//m_a = 10;
		//m_b = 10;
		//m_c = 10;
	}

	int m_d;

};

class animal
{
public:
	int m_age;
	int m_id;
};

class sheep :public animal
{

};

class camel :public animal
{

};

class alpaca :public sheep, public camel
{

};

//虚继承 animal称为虚基类
class sheep_v :virtual public animal
{

};

class camel_v :virtual public animal
{

};

class alpaca_v :public sheep_v, public camel_v
{

};



void test()
{
	//继承中的构造与析构顺序
	//父类先构造，子类先析构
	son1 s1;
	//s1.m_a = 10;
	//s1.m_b = 10;
	//s1.m_c = 10;

	son2 s2;
	//s2.m_a = 10;
	//s2.m_b = 10;
	//s2.m_c = 10;

	son3 s3;
	//s3.m_a = 10;
	//s3.m_b = 10;
	//s3.m_c = 10;


	//父类中全部非静态成员都会被子类继承
	//只不过私有属性访问不到，但确实是被继承了,被编译器隐藏了
	cout << "sizeof(son1) = " << sizeof(son1) << endl;
	cout << "sizeof(son2) = " << sizeof(son2) << endl;
	cout << "sizeof(son3) = " << sizeof(son3) << endl;

	cout << "sizeof(s1) = " << sizeof(s1) << endl;
	cout << "sizeof(s2) = " << sizeof(s2) << endl;
	cout << "sizeof(s3) = " << sizeof(s3) << endl;

	cout << "sizeof(grangson3) = " << sizeof(grandson3) << endl;

	cout << endl << endl;

	//继承同名成员属性
	cout << "s1.m_a = " << s1.m_a << endl;
	cout << "s1.father::m_a = " << s1.father::m_a << endl;

	cout << endl << endl;

	//同名成员函数
	//子类会隐藏所有父类同名成员，若想访问，必须加作用域
	s1.func();
	s1.father::func(4);
	s1.father::func();

	cout << endl << endl;

	//继承同名静态成员
	s1.func_s();
	s1.father::func_s();

	son1::func_s();
	son1::father::func_s();
	//son1::func_s(5);
	son1::father::func_s(5);

	cout << endl << endl;

	cout << "sizeof(grandson3)  = " << sizeof(grandson3) << endl;

	grandson3 gs1;
	cout << "gs1.father::m_a = " << gs1.father::m_a << endl;

	//通常不建议多继承，易导致问题复杂化

	//菱形继承
	//两个派生类继承同一个基类，又有某个类继承了这两个派生类
	//动物->🐏，驼->羊驼
	//cout << "🐏" << endl;

	cout << endl << endl;

	//菱形继承导致数据存在两份，浪费资源
	//继承同样属性时，需要加作用域用以区分
	alpaca a;
	a.sheep::m_age = 18;
	a.camel::m_age = 20;
	cout << "a.sheep::m_age = " << a.sheep::m_age << endl;
	cout << "a.camel::m_age = " << a.camel::m_age << endl;

	cout << "sizeof(alpaca) = " << sizeof(alpaca) << endl;

	cout << endl << endl;

	//利用虚继承，可以解决此类问题
	alpaca_v a1;
	a1.m_age = 20;
	cout << "a1.m_age = " << a1.m_age << endl;
	cout << "a1.sheep_v::m_age = " << a1.sheep_v::m_age << endl;
	cout << "a1.camel_v::m_age = " << a1.camel_v::m_age << endl;
	cout << "sizeof(alpaca_v) = " << sizeof(alpaca_v) << endl;

	//原来的两个m_age都被转化为vbptr虚基类指针，指向vbtable虚基类表，重新开辟一个空间存放m_age
	//vbptr指向新的存放m_age的空间

	cout << endl << endl;
}

int main()
{
	test();

	return 0;
}