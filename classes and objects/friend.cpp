#include<iostream>
#include<string>
using namespace std;

class building;

class good_friend
{
public:

	good_friend()
	{
		build = new building;
	}

	void visit();

	building* build;

};

class building
{
	//全局函数做友元
	//在类内声明
	friend void good_gay(building& build);

	//类做友元
	//friend class good_friend;


	friend void good_friend::visit();

public:
	building()
	{
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}


public:
	string m_sittingroom;

private:
	string m_bedroom;

};



void good_friend::visit()
{
	cout << "good_friend 正在访问：" << build->m_sittingroom << endl;
	cout << "good_friend 正在访问：" << build->m_bedroom << endl;
}

//全局函数做友元
void good_gay(building& build)
{
	cout << "good_gay 正在访问：" << build.m_sittingroom << endl;
	cout << "good_gay 正在访问：" << build.m_bedroom << endl;
}

void test()
{
	building build;
	good_gay(build);

	good_friend gf;
	gf.visit();
}

int main()
{
	test();

	return 0;
}