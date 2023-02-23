#include<iostream>
#include<vector>
using namespace std;

//vector ���캯��

//vector ��ֵ����

void print(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << "  ";
	}

	cout << "�������" << endl;
}

void test()
{
	// vector���캯��

	// ����
	vector<int> v1;//Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	print(v1);

	vector<int>v2(v1.begin(), v1.end());//���䴫��
	print(v2);

	vector<int>v3(10, 100);//����һ��������
	print(v3);

	// ����
	vector<int>v4(v3);//��������
	print(v4);

	cout << endl;

	// vector��ֵ
	v1.push_back(30);
	print(v1);

	// operator=
	v2 = v1;
	print(v2);

	// assign
	v3.assign(v2.begin() + 1, v2.end() - 1);
	print(v3);

	// n �� elem 
	v4.assign(5, 20);
	print(v4);

	cout << endl;

	// vector �����ʹ�С
	if (empty(v1))
	{
		cout << "v1 is empty" << endl;
	}
	else
	{
		cout << "v11 isn't empty" << endl;
		// �жϵ�ǰ����������
		cout << "v1.capacity() = " << v1.capacity() << endl;
		// �жϵ�ǰ�����Ĵ�С
		cout << "v1.size() = " << v1.size() << endl;
	}
	print(v1);

	// ����ָ����С
	// resize(size, int elem = 0)
	v1.resize(15);
	print(v1);
	cout << "v1.capacity() = " << v1.capacity() << endl;
	cout << "v1.size() = " << v1.size() << endl;

	v1.resize(20, 1);
	print(v1);
	cout << "v1.capacity() = " << v1.capacity() << endl;
	cout << "v1.size() = " << v1.size() << endl;

	// ɾ�����ಿ��
	v1.resize(10);
	print(v1);
	cout << "v1.capacity() = " << v1.capacity() << endl;
	cout << "v1.size() = " << v1.size() << endl;

	cout << endl;

	// ���ݵĲ����ɾ��
	print(v1);

	// β��
	v1.push_back(77);
	print(v1);

	// βɾ��
	v1.pop_back();
	print(v1);

	// ͷ�巨
	v1.insert(v1.begin(), 100);
	print(v1);
	v1.insert(v1.begin(), 3, 15);
	print(v1);

	// ɾ��
	v1.erase(v1.begin());
	print(v1);

	v1.erase(v1.begin(), v1.begin() + 5);
	print(v1);

	v1.erase(v1.end() - 5, v1.end());
	print(v1);

	// ���
	v1.clear();
	print(v1);

	cout << endl;

	// vector���� ���ݴ�ȡ
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	print(v1);

	// []
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << "  ";
	}
	cout << "�������" << endl;

	// at
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << "  ";
	}
	cout << "�������" << endl;

	//��ȡ��һ��Ԫ��
	cout << "v1 first elem: " << v1.front() << endl;

	//��ȡ���һ��Ԫ��
	cout << "v1 last elem: " << v1.back() << endl;

	cout << endl;

	//vector��������
	//����ʹ�ã�ʵ����;

	cout << "before swaping:" << endl;
	v1.clear();
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	print(v1);

	v2.clear();
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	print(v2);

	cout << "after swaping:" << endl;
	v1.swap(v2);
	print(v1);
	print(v2);

	cout << endl;

	//����swap�����ڴ�
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v.capacity() = " << v.capacity() << endl;
	cout << "v.size() = " << v.size() << endl;

	v.resize(3);
	cout << "v.capacity() = " << v.capacity() << endl;
	cout << "v.size() = " << v.size() << endl;

	//vector<int>(v) ��������
	vector<int>(v).swap(v);
	cout << "v.capacity() = " << v.capacity() << endl;
	cout << "v.size() = " << v.size() << endl;

	cout << endl;

	//vector Ԥ���ռ�
	v.clear();
	int* p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	//�����ڴ�Ĵ���
	cout << num << endl;

	//����reserveԤ���ռ�
	v.clear();
	v.reserve(10000);
	p = NULL;
	num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	//�����ڴ�Ĵ���
	cout << num << endl;

}

int main()
{
	test();

	return 0;
}