#include<map>
#include<iostream>
using namespace std;

//ͼ
//Ԫ�ؾ�Ϊpair:key value
// key ֵ�����ظ���value ֵ�����ظ�

class compare_a
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void print(const map<int, int>m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "  value = " << (*it).second << "  ";
	}
	cout << "complete" << endl;
}

void test()
{
	//����map����
	map<int, int>m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));

	print(m1);

	m1.insert(make_pair(5, 20));

	m1.insert(map<int, int>::value_type(6, 50));

	m1[7] = 50;

	print(m1);


	//�Զ����������������ʹ�ã��ʺϵ���ʹ��
	cout << m1[8] << endl;

	print(m1);

	m1.erase(m1.begin());
	print(m1);

	//����keyֵɾ��
	m1.erase(3);
	print(m1);

	//����ɾ��
	//m1.erase(m1.begin(), m1.end());

	m1.clear();

	//���Һ�ɾ��

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));

	//����keyֵ�����ص�����
	m1.find(3);

	//ͳ��keyԪ�ظ���
	cout << m1.count(3) << endl;

	map<int, int, compare_a>m2;

	m2.insert(make_pair(1, 10));
	m2.insert(make_pair(2, 20));
	m2.insert(make_pair(3, 30));
	m2.insert(make_pair(4, 40));

	for (map<int, int, compare_a>::iterator it = m2.begin(); it != m2.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}


}

int main()
{
	test();

	return 0;
}