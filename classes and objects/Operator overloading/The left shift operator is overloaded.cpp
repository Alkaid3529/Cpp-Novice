//#include<iostream>
//using namespace std;
//
//class person
//{
//	//���ó�Ա�����������������
//	//�����ó�Ա�������������������������
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
//	//������ֱ�����
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