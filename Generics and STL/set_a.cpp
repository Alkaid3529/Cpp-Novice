#include<set>
#include<iostream>
#include<algorithm>
using namespace std;

void print(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << "complete" << endl;
}

void print(const multiset<int>& s)
{
	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << "complete" << endl;
}

class acompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test()
{
	set<int>s1;

	//按序排列，无重复数据
	s1.insert(10);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);

	print(s1);

	set<int>s2(s1);

	print(s2);

	set<int>s3;
	s3 = s2;
	print(s3);

	//大小和交换

	if (s1.empty())
	{
		cout << "s1 is empty" << endl;
	}
	else
	{
		cout << "ss1 isn't empty" << endl;
		cout << "s1.size() = " << s1.size() << endl;
	}

	s3.clear();
	print(s1);
	print(s3);

	s1.swap(s3);
	print(s1);
	print(s3);

	//插入和删除
	s1.insert(10);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	s1.insert(60);

	//s1.clear();

	s1.erase(s1.begin());

	s1.erase(s1.begin(), s1.end());
	s1.erase(10);

	print(s1);

	//查找和统计

	s1.insert(10);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	s1.insert(60);

	//若存在，返回该值的迭代器，否则返回end()
	cout << *s1.find(50) << endl;

	//统计元素个数
	cout << s1.count(10) << endl;

	//可重复，插入数据时不检测
	multiset<int>s4;
	s4.insert(10);
	s4.insert(20);
	s4.insert(50);
	s4.insert(30);
	s4.insert(30);
	s4.insert(40);
	s4.insert(60);

	print(s4);

	//排序
	print(s1);

	//改变排序规则
	set<int, acompare>s5;
	s5.insert(10);
	s5.insert(20);
	s5.insert(50);
	s5.insert(30);
	s5.insert(30);
	s5.insert(40);
	s5.insert(60);

	for (set<int, acompare>::iterator it = s5.begin(); it != s5.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << "complete" << endl;

}

int main()
{
	test();

	return 0;
}