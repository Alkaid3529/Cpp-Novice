#include<iostream>
#include<stack>
using namespace std;

//ջ���� �Ƚ����
//��ջ push
//��ջ pop
//���������
//ֻ��ջ��Ԫ�زſɱ�������

void test()
{
	stack<int>s1;

	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);

	cout << "ջ�Ĵ�СΪ��" << s1.size() << endl;

	//ֻҪջ��Ϊ�գ��Ͳ鿴ջ������ջ
	while (!s1.empty())
	{
		cout << "ջ��Ԫ��Ϊ��" << s1.top() << endl;
		s1.pop();
	}

	cout << "ջ�Ĵ�СΪ��" << s1.size() << endl;

}

int main()
{
	test();

	return 0;
}