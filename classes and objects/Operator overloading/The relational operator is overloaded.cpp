//#include<iostream>
//using namespace std;
//
//class person
//{
//public:
//
//	person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//	bool operator==(person& p)
//	{
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//		{
//			return 1;
//		}
//		return 0;
//	}
//
//	bool operator!=(person& p)
//	{
//		if (this->m_age == p.m_age && this->m_name == p.m_name)
//		{
//			return 0;
//		}
//		return 1;
//	}
//
//	string m_name;
//	int m_age;
//
//};
//
//void test()
//{
//	person p1("张三", 18);
//	person p2("张三", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1 == p2";
//	}
//	if (p1 != p2)
//	{
//		cout << "p1 != p2";
//	}
//
//}
//
//int main()
//{
//	test();
//
//
//	return 0;
//}
