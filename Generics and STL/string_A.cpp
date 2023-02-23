#include<iostream>
#include<string>
#include<algorithm>//��׼�㷨ͷ�ļ�
#include<stack>
using namespace std;

void test()
{
	//string ���캯��
	//Ĭ�Ϲ���
	string s1;
	cout << s1 << endl;

	//�вι���
	const char* str_p = "hello world";
	string s2(str_p);
	cout << "s2 = " << s2 << endl;

	//��������
	string s3(s2);
	cout << "s3 = " << s3 << endl;

	//�вι���
	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;

	cout << endl;


	//string ��ֵ����
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

	//string ƴ�Ӳ���
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

	//string �������滻

	//int find(const string & str, int pos = 0) const;		����str��һ�γ���λ��,��pos��ʼ����
	//int find(const char* s, int pos = 0)const;			����s��һ�γ���λ��,��pos��ʼ����
	//int find(const char* s, int pos, int n) const;		��posλ�ò���s��ǰn���ַ���һ��λ��
	//int find(const char c, int pos = 0)const;				�����ַ�c��һ�γ���λ��
	//int rfind(const string & str, int pos = npos)const;	����str���һ��λ��,��pOs��ʼ����
	//int rfind(const char* s, int pos = npos)const;		����s���һ�γ���λ��,��pos��ʼ����
	//int rfind(const char* s, int pos, int n) const;		��pos����s��ǰn���ַ����һ��λ��
	//int rfind(const char c, int pos = 0)const;            �����ַ�c���һ�γ���λ��
	//string& replace(int pos, int n, const string & str);  �滻��pos��ʼn���ַ�Ϊ�ַ���str
	//string& replace(int pos, int n, const char* s);       �滻��pos��ʼ��n���ַ�Ϊ�ַ���s

	str1 = "qwere";
	int pos = str1.find("e");
	cout << "pos = " << pos << endl;

	pos = str1.find("eq");
	cout << "pos = " << pos << endl;

	//rfind��������ʼ����
	pos = str1.rfind("e");
	cout << "pos = " << pos << endl;

	str1 = "qazwsxedcrfv";

	//��ָ�������ڵ��ַ�ȫ���滻Ϊָ���ַ��������ַ������Ƿ�ƥ��
	str1.replace(1, 5, "2345");
	cout << "str1 = " << str1 << endl;

	cout << endl;

	//string �ַ����Ƚϲ���
	str1 = "hello";
	str2 = "hello";

	//һ��һ����
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

	//string �ַ���ȡ
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

	//string �ַ��������ɾ��
	// 
	//string& insert(int pos, const char* s);			�����ַ���
	//string& insert(int pos, const string & str);		�����ַ���
	//string& insert(int pos, int n, char c);			��ָ��λ�ò���n���ַ�c
	//string & erase(int pos, int n = npos);			ɾ����Pos��ʼ��n���ַ�

	str1 = "hello world";
	str1.insert(2, "111");
	cout << "str1 = " << str1 << endl;

	str1.erase(2, 3);
	cout << "str1 = " << str1 << endl;

	cout << endl;

	//string �Ӵ���ȡ
	
	//string substr(int pos = 0�� int n = npos) const;	������pos��ʼ��n���ַ���ɵ��ַ���
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