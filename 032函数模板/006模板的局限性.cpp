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

//模板有局限性
template<typename T>
bool myCompare(T& a, T& b)
{
	//如果T是Person类呢？
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
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
		cout << "相同" << endl;
	}
	else
	{
		cout << "不相同" << endl;
	}

	return 0;
}