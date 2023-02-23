//#include<iostream>
//using namespace std;
//
//class person
//{
//	friend void test();
//
//public:
//	person(int age)
//	{
//		m_age = new int(age);
//	}
//
//	person(person& p)
//	{
//		this->m_age = new int(*p.m_age);
//	}
//
//	~person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//		}
//	}
//
//	person& operator=(person& p)
//	{
//		if (this->m_age != NULL)
//		{
//			delete m_age;
//		}
//
//		this->m_age = new int(*p.m_age);
//
//		return *this;
//	}
//
//private:
//	int* m_age;
//};
//
//void test()
//{
//	person p1(20);
//	cout << *p1.m_age << endl;
//
//	person p2(30);
//	cout << *p2.m_age << endl;
//
//	p2 = p1;
//
//	person p3(5);
//	p3 = p2;
//	cout << *p3.m_age << endl;
//
//	p3 = p2 = p1;
//	cout << *p1.m_age << endl;
//	cout << *p2.m_age << endl;
//	cout << *p3.m_age << endl;
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}