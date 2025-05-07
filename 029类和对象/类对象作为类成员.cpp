#include <iostream>
using namespace std;
#include <string>
class Phone
{
public:
	string Brand;
	Phone(string brand)
	{
		Brand = brand;
		cout << "Phone构造函数的调用" << endl;
	}
	~Phone()
	{
		cout << "Phone析构函数的调用" << endl;
	}
};
class Person
{
public:
	string name;
	Phone ph;
	//相当于Phone ph=brand_name 隐式转换法
	Person(string Name, string brand_name):name(Name),
		ph(brand_name)
	{
		cout << "Person构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}
};
int main()
{
	Person p("张三", "苹果16Pro");
	cout << p.name << p.ph.Brand << endl;
	//问题来了：先走了Person构造还是Phone构造？
	return 0;
}