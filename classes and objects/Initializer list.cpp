#include<iostream>
using namespace std;


//类对象作为类成员
class school
{

public:

	school(string a)
	{
		name = a;
		cout << "school 构造\n";
	}

	~school()
	{
		cout << "school 析构\n";
	}

	string name;

};

//初始化列表
class person
{

public:


	person(int a, int b, int c, string d) :m_a(a), m_b(b), m_c(c), sch(d)
	{
		cout << "person 构造\n";
	}

	~person()
	{
		cout << "person 析构\n";
	}

	int m_a;
	int m_b;
	int m_c;
	school sch;
};

void test()
{

	person p(2, 4, 7, "张三");
	cout << p.m_a << p.m_b << p.m_c << p.sch.name << endl;
}


int main()
{
	test();

	return 0;
}