#include <iostream>
using namespace std;
#include <string>
template<class T1, class T2>
class Person;
//ȫ�ֺ���������ʵ��
//��ǰ�ñ�����֪��PrintPerson�Ĵ���
template<class T1, class T2>
void PrintPerson(Person<T1, T2>& p)
{
	cout << "������" << p.name << "\t���䣺" << p.age << endl;
}

//��ģ���Ա����������ʵ��
template<class T1, class T2>
class Person
{
private:
	T1 name;
	T2 age;
public:
	Person(T1 name, T2 age);

	//ȫ�ֺ���������ʵ��
	/*friend void ShowPerson(Person<T1, T2>& p)
	{
		cout << "������" << p.name << "\t���䣺" << p.age << endl;
	}*/

	//ȫ�ֺ���������ʵ��
	//���������ӿ�ģ������б�
	//���ȫ�ֺ�����������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void PrintPerson<>(Person<T1, T2>& p);
	
};

//���캯��������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

//ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p("�����", 999);
//	ShowPerson(p);
//}


void test02()
{
	Person<string, int>p("����", 999);
	PrintPerson(p);
}
int main()
{
	/*test01();*/
	test02();
	return 0;
}