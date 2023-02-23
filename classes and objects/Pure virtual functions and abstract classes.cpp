//#include<iostream>
//using namespace std;
//
//class base
//{
//public:
//
//	//无法实例化对象
//	//子类必须重写纯虚函数
//	virtual void func() = 0
//	{
//
//	}
//
//};
//
//class derived:public base
//{
//public:
//	void func()
//	{
//		cout << "func" << endl;
//	}
//
//};
//
//void test()
//{
//	//抽象类无法实例化对象，不管是在栈上或是堆区
//	//base b;
//	//base* b = new base;
//
//	//若子类不重写基类中的纯虚函数，则无法实例化
//	derived d;
//	d.func();
//
//	//多态的目的就是扩展函数接口
//	base* b = new derived;
//	b->func();
//
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}