#include <iostream>
using namespace std;



class Person
{
private:
	int age;
public:
	Person()
	{
		cout << "默认构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	Person(int Age)
	{
		age = Age;
		cout << "有参构造函数的调用" << endl;
	}
	/*Person(const Person& p)
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}*/
	int getAge()
	{
		return age;
	}
};
int main()
{
	//构造函数的调用规则

	//如果用户提供有参构造函数，则编译器不会提供默认构造函数
	//但会提供默认拷贝构造函数
	Person p(18);
	Person p1(p);
	cout << "p的年龄为" << p.getAge() << endl;
	cout << "p1的年龄为" << p1.getAge() << endl;
	//我们把拷贝构造函数注释掉，但是创建p1仍能完成拷贝，
	// 说明编译器提供了默认拷贝函数


	//如果用户提供拷贝构造，则编译器不会提供其他构造函数
	/*Person p(18);*/
	//我们把其他构造函数注释掉，只保留拷贝构造，
	//发现无法调用有参构造函数说明编译器没有提供有参构造函数
	return 0;
}