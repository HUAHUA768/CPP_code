#include <iostream>
using namespace std;
#include <string>
//类模板与函数模板的区别
template<class NameType,class AgeType=int>
//类模板在模板参数列表中可以有默认参数
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType name, AgeType age)
	{
		this->age = age;
		this->name = name;
	}
	void ShowPerson()
	{
		cout << "姓名：" << this->name << "\t" << "年龄：" << this->age << endl;
	}
};
int main()
{
	Person<string>p1("孙悟空", 99);
	p1.ShowPerson();
	return 0;

}