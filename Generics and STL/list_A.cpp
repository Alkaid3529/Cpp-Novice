#include<list>
#include<iostream>
using namespace std;

//链表
//双向循环链表
// prev nsxt
//插入删除方便
//双向迭代器

void print(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << "The traversal is complete." << endl;
}

bool compare_a(int v1, int v2)
{
	return v1 > v2;
}

void test()
{

	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	print(l1);

	list<int>l2(l1.begin(), l1.end());
	print(l2);

	list<int>l3(l2);
	print(l3);

	list<int>l4(4, 20);
	print(l4);

	//operator=
	l4 = l1;
	print(l4);

	l2.assign(l1.begin(), l1.end());
	print(l2);

	l4.assign(4, 20);
	print(l4);

	l1.swap(l4);
	print(l1);
	print(l4);


	//大小操作
	if (l1.empty())
	{
		cout << "l1 is empty" << endl;
	}
	else
	{
		cout << "l1.size() =" << l1.size() << endl;
	}

	l1.resize(3);
	print(l1);
	l1.resize(5);
	print(l1);
	l1.resize(10, 50);
	print(l1);

	//插入和删除

	//在尾部加入一个元素
	l1.push_back(10);

	l1.pop_back();

	l1.push_front(10);

	l1.pop_front();

	l1.insert(l1.begin(), 10);
	l1.insert(l1.begin(), 5, 10);
	l1.insert(l1.begin(), l2.begin(), l2.end());

	l1.clear();

	l1.insert(l1.begin(), l2.begin(), l2.end());

	l1.erase(l1.begin());

	l1.erase(l1.begin(), l1.end());

	l1.insert(l1.begin(), l2.begin(), l2.end());

	l1.remove(10);


	//数据存取
	cout << "l1.front() = " << l1.front();
	cout << "l1.back() = " << l1.back();

	//不支持索引访问，因为地址不连续，迭代器不支持随机访问

	print(l1);

	//反转链表
	l1.reverse();
	print(l1);

	//链表排序
	l1.sort();
	print(l1);

	l1.sort(compare_a);
	print(l1);

}

int main()
{
	test();

	return 0;
}