#include<deque>
#include<iostream>
#include <algorithm>
using namespace std;

// 中控器 维护每段缓冲区等地址，缓冲区存放真实数据

// 访问元素速度不如 vector 快，毕竟不是连续的地址

// deque 迭代器支持随机访问

void print(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it < d.end(); it++)
	{
		//*it = 100; 只读
		cout << *it << "  ";
	}
	cout << "遍历完毕" << endl;
}

void test()
{
	deque<int> d1;//默认构造
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	print(d1);

	// for_each(d1.begin(), d1.end(), print); 包含头文件

	deque<int>d2(d1.begin(), d1.end());//区间构造
	print(d2);

	cout << d1.back() << endl;

	deque<int>d3(10, 20);//有参构造
	print(d3);

	deque<int>d4(d3);//拷贝构造
	print(d4);

	cout << endl;

	//赋值
	deque<int>d5 = d4;
	print(d5);

	deque<int>d6;
	d6.assign(10, 2);
	print(d6);

	deque<int>d7;
	d7.assign(d6.begin(), d6.end());
	print(d7);

	cout << endl;

	//大小操作
	if (d1.empty())
	{
		cout << "d1 is empty" << endl;
	}
	else
	{
		cout << "d1.size() = " << d1.size() << endl;
		// deque没有容量概念
	}

	print(d1);
	d1.resize(5);
	print(d1);

	d1.resize(7);
	print(d1);

	d1.resize(10, 10);
	print(d1);

	cout << endl;

	//数据插入和删除
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
	cout << "遍历完毕" << endl;

	for (int i = 0; i < size(d1); i++)
	{
		cout << d1.at(i) << "  ";
	}
	cout << "遍历完毕" << endl;

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

	//排序算法 默认升序
	sort(d1.begin(), d1.end());

	print(d1);
}

int main()
{
	test();



	return 0;
}
