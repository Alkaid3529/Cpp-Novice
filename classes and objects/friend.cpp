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
	//ȫ�ֺ�������Ԫ
	//����������
	friend void good_gay(building& build);

	//������Ԫ
	//friend class good_friend;


	friend void good_friend::visit();

public:
	building()
	{
		m_sittingroom = "����";
		m_bedroom = "����";
	}


public:
	string m_sittingroom;

private:
	string m_bedroom;

};



void good_friend::visit()
{
	cout << "good_friend ���ڷ��ʣ�" << build->m_sittingroom << endl;
	cout << "good_friend ���ڷ��ʣ�" << build->m_bedroom << endl;
}

//ȫ�ֺ�������Ԫ
void good_gay(building& build)
{
	cout << "good_gay ���ڷ��ʣ�" << build.m_sittingroom << endl;
	cout << "good_gay ���ڷ��ʣ�" << build.m_bedroom << endl;
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