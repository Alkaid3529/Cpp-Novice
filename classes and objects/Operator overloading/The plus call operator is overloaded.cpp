//#include<iostream>
//using namespace std;
//
//class person
//{
//
//public:
//
//	//成员函数重载加号
//	person operator+(person& p)
//	{
//		person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//
//		return temp;
//	}
//
//	//成员函数重载减号
//	person operator-(person& p)
//	{
//		person temp;
//		temp.m_a = this->m_a - p.m_a;
//		temp.m_b = this->m_b - p.m_b;
//
//		return temp;
//	}
//
//	int m_a;
//	int m_b;
//};
//
////全局函数重载加号
//person operator+ (person& p1, person& p2)
//{
//	person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//
//	return temp;
//}
//
//person operator+ (person& p1, int a)
//{
//	person temp;
//	temp.m_a = p1.m_a + a;
//	temp.m_b = p1.m_b + a;
//
//	return temp;
//}
//
//void test()
//{
//	person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//
//	person p2;
//	p2.m_a = 20;
//	p2.m_b = 30;
//
//	person p3 = p1.operator + (p2);
//
//	p3 = operator+(p1, p2);
//
//	cout << "p3.m_a = " << p3.m_a << endl;
//	cout << "p3.m_b = " << p3.m_b << endl;
//
//
//	person p4 = p1 - p2;
//
//	cout << "p4.m_a = " << p4.m_a << endl;
//	cout << "p4.m_b = " << p4.m_b << endl;
//
//
//	person p5 = p1 + 100;
//
//	cout << "p5.m_a = " << p5.m_a << endl;
//	cout << "p5.m_b = " << p5.m_b << endl;
//
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}