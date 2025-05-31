#include <iostream>
using namespace std;
class Person
{
public:
	string name;
	int age;
	Person(string n, int age)
	{
		this->name = n;
		this->age = age;
	}
};

//ģ���о�����
template<typename T>
bool myCompare(T& a, T& b)
{
	//���T��Person���أ�
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person& a, Person& b)
{
	if (a.name == b.name && a.age == b.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret == true)
	{
		cout << "��ͬ" << endl;
	}
	else
	{
		cout << "����ͬ" << endl;
	}

	return 0;
}