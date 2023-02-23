#include<iostream>
#include<string>
#include<stack>
using namespace std;

void test()
{
	pair<string, int>p("bob", 20);
	cout << p.first << "  " << p.second << endl;

	stack<pair<int,int>>cac;

	cac.push(pair<int, int>(2, 5));
	cout << cac.top().first << endl;

	pair<string, int>p2 = make_pair("jack", 25);
	cout << p2.first << "  " << p2.second << endl;


}

int main()
{
	test();

	return 0;
}