#include <iostream>
using namespace std;
#include <string>
template<class T1, class T2>
class Person;
//全局函数，类外实现
//提前让编译器知道PrintPerson的存在
template<class T1, class T2>
void PrintPerson(Person<T1, T2>& p)
{
	cout << "姓名：" << p.name << "\t年龄：" << p.age << endl;
}

//类模板成员函数的类外实现
template<class T1, class T2>
class Person
{
private:
	T1 name;
	T2 age;
public:
	Person(T1 name, T2 age);

	//全局函数，类内实现
	/*friend void ShowPerson(Person<T1, T2>& p)
	{
		cout << "姓名：" << p.name << "\t年龄：" << p.age << endl;
	}*/

	//全局函数，类外实现
	//类内声明加空模板参数列表
	//如果全局函数是在类外实现，需要让编译器提前知道这个函数的存在
	friend void PrintPerson<>(Person<T1, T2>& p);
	
};

//构造函数的类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
}

//全局函数，类内实现
//void test01()
//{
//	Person<string, int>p("孙悟空", 999);
//	ShowPerson(p);
//}


void test02()
{
	Person<string, int>p("大西", 999);
	PrintPerson(p);
}
int main()
{
	/*test01();*/
	test02();
	return 0;
}