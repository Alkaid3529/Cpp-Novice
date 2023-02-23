#include<iostream>
#include<string>
using namespace std;

const double pi = 3.14;

//���һ��Բ�࣬��Բ���ܳ�
class circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//Բ������
	int m_r = 1;

	//Բ����Ϊ
	double calculate()
	{
		return 2 * pi * m_r;
	}

};

class student
{
public:
	string s_name;
	string s_id;

	void setname(string name)
	{
		s_name = name;
	}

	void setid(string id)
	{
		s_id = id;
	}

	void display()
	{
		cout << "����Ϊ��" << s_name << endl;
		cout << "ѧ��Ϊ��" << s_id << endl;
	}
};

//����Ȩ��
//public ����Ȩ��      ���ڿ��Է��ʣ�������Է���
//protected ����Ȩ��   ���ڿ��Է��ʣ����ⲻ���Է���  �̳�ʱ��������Է���
//private  ˽��Ȩ��    ���ڿ��Է��ʣ����ⲻ���Է���

class person
{
public:
	string m_name;

protected:
	string m_car;

private:
	int m_password;

public:
	//�����������
	void func()
	{
		m_name = "����";
		m_car = "����";
		m_password = 123;
	}

};

struct man
{
	string name;
};

class woman
{
	string name;
};

class husband
{
public:
	void setname(string name)
	{
		m_name = name;
	}

	string getname()
	{
		return m_name;
	}

	int getage()
	{
		return m_age;
	}

	void setlover(string lover)
	{
		m_lover = lover;
	}

private:
	//��д�ɶ�
	string m_name;

	//�ɶ�����д
	int m_age;

	//��д���ɶ�
	string m_lover;
};

class cube
{

public:
	void set_side_length(int a)
	{
		side_length = a;
	}

	int get_area()
	{
		return 6 * side_length * side_length;
	}

	int get_volume()
	{
		return side_length * side_length * side_length;
	}

	void determine_equal(int a)
	{
		if (side_length == a)
		{
			cout << "�������������";
			return;
		}
		else
		{
			cout << "���������岻���";
			return;
		}
	}

private:
	int side_length;

};

class round_1
{
public:
	void set_radius(int r)
	{
		radius = r;
	}

	void set_center(int x, int y)
	{
		center_x = x;
		center_y = y;
	}

	void set_point(int x, int y)
	{
		point_x = x;
		point_y = y;
	}

	void verdict()
	{
		int d = (center_x - point_x) * (center_x - point_x) + (center_y - point_y) * (center_y - point_y);
		if (d == radius * radius)
		{
			cout << "����Բ��" << endl;
		}
		if (d < radius * radius)
		{
			cout << "����Բ��" << endl;
		}
		if (d > radius * radius)
		{
			cout << "����Բ��" << endl;
		}
	}

private:
	int radius;
	int center_x;
	int center_y;
	int point_x;
	int point_y;

};

int main()
{
	//ͨ���࣬�������
	//ʵ����
	circle c_1;

	//��ֵ
	c_1.m_r = 10;


	cout << c_1.calculate() << endl << endl;

	student s_1;
	s_1.setname("����");
	s_1.setid("2052152");

	s_1.display();

	person p_1;
	p_1.m_name = "����";

	//����Ȩ�����������޷�����
	//p_1.car = "����";

	//structȨ��Ĭ�Ϲ��У�classȨ��Ĭ��˽��
	man m_1;
	m_1.name = "����";

	woman w_1;
	//w_1.name = "����";

	cout << endl;

	cube c;
	c.set_side_length(10);
	cout << "���������Ϊ��" << c.get_area() << endl;
	cout << "���������Ϊ��" << c.get_volume() << endl;

	c.determine_equal(10);

	cout << endl << endl;

	round_1 r;
	r.set_center(0, 0);
	r.set_point(1, 1);
	r.set_radius(2);
	r.verdict();	

	return 0;
}