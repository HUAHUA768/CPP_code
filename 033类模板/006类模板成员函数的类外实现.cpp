#include <iostream>
using namespace std;
#include <string>
//类模板成员函数的类外实现
template<class T1,class T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age);
	
	void ShowPerson();
	
};

//构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

//成员函数的类外实现
template<class T1,class T2>
void Person<T1,T2>::ShowPerson()
{
	cout << "姓名：" << this->name << "\t年龄：" << this->age <<
		endl;
}
int main()
{
	Person<string, int>p("孙悟空", 999);
	p.ShowPerson();
	return 0;
}