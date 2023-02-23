#include<iostream>
#include<string>
using namespace std;

const double pi = 3.14;

//设计一个圆类，求圆的周长
class circle
{
	//访问权限
	//公共权限
public:

	//圆的属性
	int m_r = 1;

	//圆的行为
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
		cout << "姓名为：" << s_name << endl;
		cout << "学号为：" << s_id << endl;
	}
};

//访问权限
//public 公共权限      类内可以访问，类外可以访问
//protected 保护权限   类内可以访问，类外不可以访问  继承时，子类可以访问
//private  私有权限    类内可以访问，类外不可以访问

class person
{
public:
	string m_name;

protected:
	string m_car;

private:
	int m_password;

public:
	//类内随意访问
	void func()
	{
		m_name = "张三";
		m_car = "宝马";
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
	//可写可读
	string m_name;

	//可读不可写
	int m_age;

	//可写不可读
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
			cout << "两个立方体相等";
			return;
		}
		else
		{
			cout << "两个立方体不相等";
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
			cout << "点在圆上" << endl;
		}
		if (d < radius * radius)
		{
			cout << "点在圆内" << endl;
		}
		if (d > radius * radius)
		{
			cout << "点在圆外" << endl;
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
	//通过类，定义对象
	//实例化
	circle c_1;

	//赋值
	c_1.m_r = 10;


	cout << c_1.calculate() << endl << endl;

	student s_1;
	s_1.setname("张三");
	s_1.setid("2052152");

	s_1.display();

	person p_1;
	p_1.m_name = "李四";

	//保护权限内容类外无法访问
	//p_1.car = "奔驰";

	//struct权限默认公有，class权限默认私有
	man m_1;
	m_1.name = "张三";

	woman w_1;
	//w_1.name = "张三";

	cout << endl;

	cube c;
	c.set_side_length(10);
	cout << "立方体面积为：" << c.get_area() << endl;
	cout << "立方体体积为：" << c.get_volume() << endl;

	c.determine_equal(10);

	cout << endl << endl;

	round_1 r;
	r.set_center(0, 0);
	r.set_point(1, 1);
	r.set_radius(2);
	r.verdict();	

	return 0;
}