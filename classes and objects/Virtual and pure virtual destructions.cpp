//#include<iostream>
//using namespace std;
//
//class animal
//{
//public:
//	animal()
//	{
//		cout << "animal ����" << endl;
//	}
//
//	/*virtual ~animal()
//	{
//		cout << "animal ����" << endl;
//	}*/
//
//	//�������� ������
//	virtual ~animal() = 0;
//
//public:
//	virtual void speak() = 0;
//};
//
//animal:: ~animal()
//{
//	cout << "animal ��������" << endl;
//}
//
//class cat :public animal
//{
//public:
//
//	cat(string name)
//	{
//		cout << "cat ����" << endl;
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
//		cout << "cat ����" << endl;
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
//	//����ָ��ָ�����࣬��������ʱ����������������������ڴ�й¶
//	//������������������ͷ����಻��ȫ������
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