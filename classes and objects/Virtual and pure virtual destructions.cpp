//#include<iostream>
//using namespace std;
//
//class animal
//{
//public:
//	animal()
//	{
//		cout << "animal 构造" << endl;
//	}
//
//	/*virtual ~animal()
//	{
//		cout << "animal 析构" << endl;
//	}*/
//
//	//纯虚析构 抽象类
//	virtual ~animal() = 0;
//
//public:
//	virtual void speak() = 0;
//};
//
//animal:: ~animal()
//{
//	cout << "animal 纯虚析构" << endl;
//}
//
//class cat :public animal
//{
//public:
//
//	cat(string name)
//	{
//		cout << "cat 构造" << endl;
//		m_name = new string(name);
//	}
//
//	~cat()
//	{
//		if (m_name != NULL)
//		{
//			delete m_name;
//			m_name = NULL;
//		}
//		cout << "cat 析构" << endl;
//	}
//
//	void speak()
//	{
//		cout << *m_name << " cat is speaking" << endl;
//	}
//
//
//	string* m_name;
//};
//
//void speak(animal* a)
//{
//	a->speak();
//	delete a;
//}
//
//void test()
//{
//	//基类指针指向子类，析构基类时不会调用子类析构，导致内存泄露
//	//利用虚析构解决基类释放子类不完全的问题
//	speak(new cat("Tom"));
//
//
//
//}
//
//int main()
//{
//	test();
//
//	return 0;
//}