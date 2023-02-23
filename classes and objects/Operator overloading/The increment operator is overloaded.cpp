//#include<iostream>
//using namespace std;
//
//class A_integer
//{
//	friend ostream& operator<<(ostream& cout, A_integer a);
//
//public:
//	A_integer()
//	{
//		m_num = 0;
//	}
//
//	//重载++运算符
//
//	//重载前置++运算符
//	//必须是引用，才能保证始终为对同一数据操作
//	A_integer& operator++()
//	{
//		m_num++;
//
//		return *this;
//	}
//
//	//重载后置++运算符
//	//占位参数 int 表明后置
//	A_integer operator++(int)
//	{
//		//先记录当时结果
//		A_integer temp = *this;
//
//		//再递增
//		m_num++;
//
//		//返回记录的结果
//		return temp;
//	}
//
//
//
//private:
//	int m_num;
//
//};
//
////重载左移运算符
//ostream& operator<<(ostream& cout, A_integer a)
//{
//	cout << "a.m_num = " << a.m_num << endl;
//
//	return cout;
//}
//
//void test()
//{
//	A_integer a;
//	
//	cout << ++++a << endl;
//	cout << a << endl;
//
//	A_integer b;
//
//	cout << b << endl;
//	cout << b++ << endl;
//	cout << b << endl;
//}
//
//int main()
//{
//
//	test();
//
//	return 0;
//}