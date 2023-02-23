#include<map>
#include<iostream>
using namespace std;

//图
//元素均为pair:key value
// key 值不可重复，value 值可以重复

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
	//创建map容器
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


	//自动创建，不建议插入使用，适合调用使用
	cout << m1[8] << endl;

	print(m1);

	m1.erase(m1.begin());
	print(m1);

	//根据key值删除
	m1.erase(3);
	print(m1);

	//区间删除
	//m1.erase(m1.begin(), m1.end());

	m1.clear();

	//查找和删除

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));

	//查找key值，返回迭代器
	m1.find(3);

	//统计key元素个数
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