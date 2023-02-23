#include<iostream>
using namespace std;

class person
{
public:
	person(int age, int height)
	{
		cout << "有参构造\n";
		m_age = age;
		m_height = new int(height);
	}

	person(const person& p)
	{
		cout << "拷贝构造\n";
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}


	~person()
	{
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "析构函数\n" << endl;
	}


	int m_age;
	int* m_height;

};

void test()
{
	person p1(10, 180);

	person p2(p1);

	return;
}

int main()
{
	test();


	return 0;
}