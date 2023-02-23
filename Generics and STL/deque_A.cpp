#include<deque>
#include<iostream>
#include <algorithm>
using namespace std;

// �п��� ά��ÿ�λ������ȵ�ַ�������������ʵ����

// ����Ԫ���ٶȲ��� vector �죬�Ͼ����������ĵ�ַ

// deque ������֧���������

void print(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
	{
		//*it = 100; ֻ��
		cout << *it << "  ";
	}
	cout << "�������" << endl;
}

void test()
{
	deque<int> d1;//Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	print(d1);

	// for_each(d1.begin(), d1.end(), print); ����ͷ�ļ�

	deque<int>d2(d1.begin(), d1.end());//���乹��
	print(d2);

	cout << d1.back() << endl;

	deque<int>d3(10, 20);//�вι���
	print(d3);

	deque<int>d4(d3);//��������
	print(d4);

	cout << endl;

	//��ֵ
	deque<int>d5 = d4;
	print(d5);

	deque<int>d6;
	d6.assign(10, 2);
	print(d6);

	deque<int>d7;
	d7.assign(d6.begin(), d6.end());
	print(d7);

	cout << endl;

	//��С����
	if (d1.empty())
	{
		cout << "d1 is empty" << endl;
	}
	else
	{
		cout << "d1.size() = " << d1.size() << endl;
		// dequeû����������
	}

	print(d1);
	d1.resize(5);
	print(d1);

	d1.resize(7);
	print(d1);

	d1.resize(10, 10);
	print(d1);

	cout << endl;

	//���ݲ����ɾ��
	print(d1);
	d1.push_back(10);
	d1.push_back(20);
	print(d1);

	d1.push_front(10);
	d1.push_front(20);
	print(d1);

	d1.insert(d1.begin(), 1000);
	print(d1);

	d1.insert(d1.end(), 2, 300);
	print(d1);

	print(d2);
	d2.insert(d2.begin(), d1.begin() + 2, d1.end() - 2);
	print(d2);

	print(d1);
	d1.erase(d1.begin());
	print(d1);

	d1.erase(d1.begin(), d1.begin() + 3);
	print(d1);

	d1.clear();
	print(d1);

	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	for (int i = 0; i < size(d1); i++)
	{
		cout << d1[i] << "  ";
	}
	cout << "�������" << endl;

	for (int i = 0; i < size(d1); i++)
	{
		cout << d1.at(i) << "  ";
	}
	cout << "�������" << endl;

	cout << "d1.front() = " << d1.front() << endl;
	cout << "d1.back() = " << d1.back() << endl;

	d1.clear();
	d1.push_back(2);
	d1.push_back(1);
	d1.push_back(5);
	d1.push_back(3);
	d1.push_back(7);
	d1.push_back(6);

	print(d1);

	//�����㷨 Ĭ������
	sort(d1.begin(), d1.end());

	print(d1);
}

int main()
{
	test();



	return 0;
}
