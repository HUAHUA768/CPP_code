#include <iostream>
using namespace std;
#include <string>
//��ģ���Ա����������ʵ��
template<class T1,class T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age);
	
	void ShowPerson();
	
};

//���캯��������ʵ��
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

//��Ա����������ʵ��
template<class T1,class T2>
void Person<T1,T2>::ShowPerson()
{
	cout << "������" << this->name << "\t���䣺" << this->age <<
		endl;
}
int main()
{
	Person<string, int>p("�����", 999);
	p.ShowPerson();
	return 0;
}