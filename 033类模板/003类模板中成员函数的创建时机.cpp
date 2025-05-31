#include <iostream>
using namespace std;
//类模板中成员函数的创建时机
//类模板中的成员函数在调用时才创建
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