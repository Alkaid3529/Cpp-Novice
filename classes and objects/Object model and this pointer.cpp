#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����ֿ��洢
//ֻ�зǾ�̬��Ա������������Ķ�����
//���඼��������Ķ�����

//thisָ��ָ����ú����Ķ���
//������Ϊָ�볣���������޸�ָ����
//person const*this;


//thisָ������ã�������Ƴ�ͻ

//const���γ�Ա��������Ϊ������
//mutable���Ա��ڳ��������ʳ�Ա

//��������ǰ��const��Ϊ������
//������ֻ�ܵ��ó�����

class person
{

public:
	//�Ǿ�̬��Ա����
	int m_a;

	//��̬��Ա���������ڶ�����
	static int m_s;

	//�Ǿ�̬��Ա�������ڶ�����
	void func()
	{

	}

	//��̬��Ա�������ڶ�����
	static void func_s()
	{

	}

	person(int age)
	{
		//Ĭ�������ֻҪ���þ�̬��Ա����������thisָ��
		//Ϊ��ֹ�������룬�����ж���������ߴ��뽡׳��
		//��ָ����Է��ʳ�Ա�������ܵ��´���
		if (this == NULL)
		{
			return;
		}

		this->age = age;
	}

	person& age_add(const person& p)
	{
		this->age += p.age;

		return *this;
	}

	//��Ա�������const������thisָ�룬ʹ��ָ��ָ�����ֵҲ�������޸�
	void set_age(int a) const
	{
		//age++;
		weigth++;
	}

	int age;

	//����������ʹ�ô˱��������ڳ��������޸Ĵ˱���
	mutable int weigth;

};

void test()
{
	//�ն����ڴ�Ϊ1
	//Ϊÿ���ն������һ���ֽڣ����ֶ���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ�ж�һ�޶����ڴ��ַ
	person p(18);

	cout << "sizeof(person) = " << sizeof(person) << endl;

	person p2(20);
	cout << p2.age << endl;


	//��ʽ���
	p2.age_add(p).age_add(p).age_add(p);

	cout << p2.age << endl;

	//������
	const person p_c(20);
	//�����󲻿��޸�ֵ
	//p_c.age = 20;

	//�����޸����������ı���
	p_c.weigth = 20;

	//������ֻ�ܵ��ó������������Ե�����ͨ��Ա��������Ϊ��ͨ��Ա�������Ե�����ͨ��Ա����
	p_c.set_age(10);
	//p_c.func();

	return;
}

int main()
{
	test();

	return 0;
}