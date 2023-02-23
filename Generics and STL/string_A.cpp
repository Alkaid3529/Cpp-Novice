#include<iostream>
#include<string>
#include<algorithm>//标准算法头文件
#include<stack>
using namespace std;

void test()
{
	//string 构造函数
	//默认构造
	string s1;
	cout << s1 << endl;

	//有参构造
	const char* str_p = "hello world";
	string s2(str_p);
	cout << "s2 = " << s2 << endl;

	//拷贝构造
	string s3(s2);
	cout << "s3 = " << s3 << endl;

	//有参构造
	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;

	cout << endl;


	//string 赋值操作
	string str1;
	str1 = "hello c++";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello c++", 5);
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(10, 'w');
	cout << "str7 = " << str7 << endl;

	cout << endl;

	//string 拼接操作
	string str8 = "Alkaid";
	str8 += "#352";
	cout << "str8 = " << str8 << endl;

	str8 += '9';
	cout << "str8 = " << str8 << endl;

	string str9 = "c++";
	str8 += str9;
	cout << "str8 = " << str8 << endl;

	string str10 = "Alkaid";
	str10.append("#3529");
	cout << "str10 = " << str10 << endl;

	str10.append("#3529", 2);
	cout << "str10 = " << str10 << endl;

	str10.append(str9);
	cout << "str10 = " << str10 << endl;

	str10.append(str9, 2);
	cout << "str10 = " << str10 << endl;

	str10.append(str9, 0, 2);
	cout << "str10 = " << str10 << endl;

	cout << endl;

	//string 查找与替换

	//int find(const string & str, int pos = 0) const;		查找str第一次出现位置,从pos开始查找
	//int find(const char* s, int pos = 0)const;			查找s第一次出现位置,从pos开始查找
	//int find(const char* s, int pos, int n) const;		从pos位置查找s的前n个字符第一次位置
	//int find(const char c, int pos = 0)const;				查找字符c第一次出现位置
	//int rfind(const string & str, int pos = npos)const;	查找str最后一次位置,从pOs开始查找
	//int rfind(const char* s, int pos = npos)const;		查找s最后一次出现位置,从pos开始查找
	//int rfind(const char* s, int pos, int n) const;		从pos查找s的前n个字符最后一次位置
	//int rfind(const char c, int pos = 0)const;            查找字符c最后一次出现位置
	//string& replace(int pos, int n, const string & str);  替换从pos开始n个字符为字符串str
	//string& replace(int pos, int n, const char* s);       替换从pos开始的n个字符为字符串s

	str1 = "qwere";
	int pos = str1.find("e");
	cout << "pos = " << pos << endl;

	pos = str1.find("eq");
	cout << "pos = " << pos << endl;

	//rfind从右往左开始查找
	pos = str1.rfind("e");
	cout << "pos = " << pos << endl;

	str1 = "qazwsxedcrfv";

	//将指定区间内的字符全部替换为指定字符，无论字符数量是否匹配
	str1.replace(1, 5, "2345");
	cout << "str1 = " << str1 << endl;

	cout << endl;

	//string 字符串比较操作
	str1 = "hello";
	str2 = "hello";

	//一个一个比
	if (str1.compare(str2) == 0)
	{
		cout << "str1 == str2" << endl;
	}
	else
	{
		cout << "str1 != str2" << endl;
	}

	if (str1 == str2)
	{
		cout << "str1 == str2" << endl;
	}
	else
	{
		cout << "str1 != str2" << endl;
	}

	cout << endl;

	//string 字符存取
	str1 = "hello world";

	for (int i = 0; i < size(str1); i++)
	{
		cout << str1[i] << "  ";
	}
	cout << endl;

	for (int i = 0; i < size(str1); i++)
	{
		cout << str1.at(i) << "  ";
	}
	cout << endl;

	cout << endl;

	//string 字符串插入和删除
	// 
	//string& insert(int pos, const char* s);			插入字符串
	//string& insert(int pos, const string & str);		插入字符串
	//string& insert(int pos, int n, char c);			在指定位置插入n个字符c
	//string & erase(int pos, int n = npos);			删除从Pos开始的n个字符

	str1 = "hello world";
	str1.insert(2, "111");
	cout << "str1 = " << str1 << endl;

	str1.erase(2, 3);
	cout << "str1 = " << str1 << endl;

	cout << endl;

	//string 子串获取
	
	//string substr(int pos = 0， int n = npos) const;	返回由pos开始的n个字符组成的字符串
	str1 = "hello world";
	string str_sub = str1.substr(1, 3);
	cout << "str_sub = " << str_sub << endl;

}

int main()
{
	test();

	string s = "week";
	cout << s[0] << endl;

	stack<char>cac;
	cac.push(s[0]);

	s += cac.top();
	cout << s << endl;

	

	return 0;
}