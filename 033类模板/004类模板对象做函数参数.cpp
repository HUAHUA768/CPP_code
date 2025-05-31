#include <iostream>
using namespace std;
#include <string>
template<class T1,class T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age)
	{
		this->name = name;
		this->age = age;
	}
	void ShowPerson()
	{
		cout << "姓名：" << this->name << "\t" << "年龄：" 
			<< this->age << endl;
	}
};

//1.指定传入的类型
void PrintPerson1(Person<string, int>& p)
{
	p.ShowPerson();
}

//2.参数模板化
template<class T1, class T2>
void PrintPerson2(Person<T1, T2>& p)
{
	p.ShowPerson();

	//看看编译器推导出的T1T2是什么类型
	cout << "T1类型为：" << typeid(T1).name() << endl;
	cout << "T2类型为：" << typeid(T2).name() << endl;

}

//3.整个类模板化
template<class T>
void PrintPerson3(T &p)
{
	p.ShowPerson();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}

void test01()
{
	//1.指定传入的类型
	Person<string, int>p("孙悟空", 999);
	PrintPerson1(p);
}
void test02()
{
	//2.参数模板化
	Person<string, int>p2("猪八戒", 500);
	PrintPerson2(p2);
}
int main()
{
	

	//类模板对象做函数参数
	
	/*test01();
	test02();*/
	//3.整个类模板化
	Person<string, int>p3("沙僧", 400);
	PrintPerson3(p3);
	return 0;
}