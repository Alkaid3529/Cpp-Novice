#include<iostream>
using namespace std;


//�������Ϊ���Ա
class school
{

public:

	school(string a)
	{
		name = a;
		cout << "school ����\n";
	}

	~school()
	{
		cout << "school ����\n";
	}

	string name;

};

//��ʼ���б�
class person
{

public:


	person(int a, int b, int c, string d) :m_a(a), m_b(b), m_c(c), sch(d)
	{
		cout << "person ����\n";
	}

	~person()
	{
		cout << "person ����\n";
	}

	int m_a;
	int m_b;
	int m_c;
	school sch;
};

void test()
{

	person p(2, 4, 7, "����");
	cout << p.m_a << p.m_b << p.m_c << p.sch.name << endl;
}


int main()
{
	test();

	return 0;
}