//#include<iostream>
//using namespace std;
//
//class person
//{
//	//利用成员函数重载左移运算符
//	//不利用成员函数重载左移运算符，不合适
//	/*void operator<<(cout)
//	{
//
//	}*/
//
//	friend ostream& operator<<(ostream& cout, person& p);
//
//public:
//	person()
//	{
//		m_a = 10;
//		m_b = 10;
//	}
//
//private:
//	int m_a;
//	int m_b;
//
//};
//
//ostream& operator<<(ostream& cout, person& p)
//{
//	cout << "p.m_a = " << p.m_a << endl;
//	cout << "p.m_b = " << p.m_b << endl;
//
//	return cout;
//}
//
//void test()
//{
//	person p;
//
//	//不可以直接输出
//	//cout << p;
//
//	cout << p << endl;
//}
//
//int main()
//{
//
//	test();
//
//	return 0;
//}