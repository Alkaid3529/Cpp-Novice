//#include<iostream>
//using namespace std;
//
//class base
//{
//public:
//
//	//�޷�ʵ��������
//	//���������д���麯��
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
//	//�������޷�ʵ�������󣬲�������ջ�ϻ��Ƕ���
//	//base b;
//	//base* b = new base;
//
//	//�����಻��д�����еĴ��麯�������޷�ʵ����
//	derived d;
//	d.func();
//
//	//��̬��Ŀ�ľ�����չ�����ӿ�
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