#include<iostream>
#include<stack>
using namespace std;

//栈容器 先进后出
//入栈 push
//出栈 pop
//不允许遍历
//只有栈顶元素才可被外界访问

void test()
{
	stack<int>s1;

	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);

	cout << "栈的大小为：" << s1.size() << endl;

	//只要栈不为空，就查看栈顶并出栈
	while (!s1.empty())
	{
		cout << "栈顶元素为：" << s1.top() << endl;
		s1.pop();
	}

	cout << "栈的大小为：" << s1.size() << endl;

}

int main()
{
	test();

	return 0;
}