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
//	//����++�����
//
//	//����ǰ��++�����
//	//���������ã����ܱ�֤ʼ��Ϊ��ͬһ���ݲ���
//	A_integer& operator++()
//	{
//		m_num++;
//
//		return *this;
//	}
//
//	//���غ���++�����
//	//ռλ���� int ��������
//	A_integer operator++(int)
//	{
//		//�ȼ�¼��ʱ���
//		A_integer temp = *this;
//
//		//�ٵ���
//		m_num++;
//
//		//���ؼ�¼�Ľ��
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
////�������������
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