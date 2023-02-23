#include<iostream>
#include<vector>
using namespace std;

//vector 构造函数

//vector 赋值操作

void print(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
	{
		cout << *it << "  ";
	}

	cout << "遍历完毕" << endl;
}

void test()
{
	// vector构造函数

	// 常用
	vector<int> v1;//默认构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i + 1);
	}
	print(v1);

	vector<int>v2(v1.begin(), v1.end());//区间传入
	print(v2);

	vector<int>v3(10, 100);//参数一个参数二
	print(v3);

	// 常用
	vector<int>v4(v3);//拷贝构造
	print(v4);

	cout << endl;

	// vector赋值
	v1.push_back(30);
	print(v1);

	// operator=
	v2 = v1;
	print(v2);

	// assign
	v3.assign(v2.begin() + 1, v2.end() - 1);
	print(v3);

	// n 个 elem 
	v4.assign(5, 20);
	print(v4);

	cout << endl;

	// vector 容量和大小
	if (empty(v1))
	{
		cout << "v1 is empty" << endl;
	}
	else
	{
		cout << "v11 isn't empty" << endl;
		// 判断当前容器的容量
		cout << "v1.capacity() = " << v1.capacity() << endl;
		// 判断当前容器的大小
		cout << "v1.size() = " << v1.size() << endl;
	}
	print(v1);

	// 重新指定大小
	// resize(size, int elem = 0)
	v1.resize(15);
	print(v1);
	cout << "v1.capacity() = " << v1.capacity() << endl;
	cout << "v1.size() = " << v1.size() << endl;

	v1.resize(20, 1);
	print(v1);
	cout << "v1.capacity() = " << v1.capacity() << endl;
	cout << "v1.size() = " << v1.size() << endl;

	// 删除多余部分
	v1.resize(10);
	print(v1);
	cout << "v1.capacity() = " << v1.capacity() << endl;
	cout << "v1.size() = " << v1.size() << endl;

	cout << endl;

	// 数据的插入和删除
	print(v1);

	// 尾插
	v1.push_back(77);
	print(v1);

	// 尾删法
	v1.pop_back();
	print(v1);

	// 头插法
	v1.insert(v1.begin(), 100);
	print(v1);
	v1.insert(v1.begin(), 3, 15);
	print(v1);

	// 删除
	v1.erase(v1.begin());
	print(v1);

	v1.erase(v1.begin(), v1.begin() + 5);
	print(v1);

	v1.erase(v1.end() - 5, v1.end());
	print(v1);

	// 清空
	v1.clear();
	print(v1);

	cout << endl;

	// vector容器 数据存取
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
	cout << "遍历完毕" << endl;

	// at
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << "  ";
	}
	cout << "遍历完毕" << endl;

	//获取第一个元素
	cout << "v1 first elem: " << v1.front() << endl;

	//获取最后一个元素
	cout << "v1 last elem: " << v1.back() << endl;

	cout << endl;

	//vector互换容器
	//基本使用，实际用途

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

	//利用swap收缩内存
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

	//vector<int>(v) 匿名对象
	vector<int>(v).swap(v);
	cout << "v.capacity() = " << v.capacity() << endl;
	cout << "v.size() = " << v.size() << endl;

	cout << endl;

	//vector 预留空间
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

	//更换内存的次数
	cout << num << endl;

	//利用reserve预留空间
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

	//更换内存的次数
	cout << num << endl;

}

int main()
{
	test();

	return 0;
}