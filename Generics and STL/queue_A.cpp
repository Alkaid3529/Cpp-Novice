#include<queue>
#include<iostream>
using namespace std;

//队列 先入先出
//仅队头队尾可被访问
//仅队尾入，队头出

class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	friend ostream& operator<<(ostream& cout, person& p);

	string m_name;
	int m_age;
};

ostream& operator<<(ostream& cout, person& p)
{
	cout << "name : " << p.m_name << endl;
	cout << "age  : " << p.m_age << endl;

	return cout;
}

void test()
{
	queue<person>q1;

	person p1("bob", 18);
	person p2("andy", 19);
	person p3("cat", 20);
	person p4("jack", 23);

	q1.push(p1);
	q1.push(p2);
	q1.push(p3);
	q1.push(p4);

	cout <<"q1.size() = " << q1.size() << endl;

	while (!q1.empty())
	{
		//队头
		cout << q1.front() << endl;

		//队尾
		cout << q1.back() << endl;

		//出队
		q1.pop();
	}

	cout << "q1.size() = " << q1.size() << endl;

}

int main()
{
	test();

	return 0;
}