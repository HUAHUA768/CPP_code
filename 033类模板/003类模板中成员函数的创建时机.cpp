#include <iostream>
using namespace std;
//��ģ���г�Ա�����Ĵ���ʱ��
//��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;
	void func1()
	{
		obj.ShowPerson1();
	}
	void func2()
	{
		obj.ShowPerson2();
	}
};
int main()
{
	MyClass<Person1>m;
	m.func1();

	return 0;
}