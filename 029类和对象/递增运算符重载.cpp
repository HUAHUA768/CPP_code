#include <iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		my_int = 0;
	}
	int getmy_int() const
	{
		return my_int;
	}
	//重载递增运算符
	//重载前置++运算符
	Person& operator++()
	{
		my_int++;
		return *this;
	}

	//重载后置++运算符
	//不满足函数重载条件：参数加int
	Person operator++(int)
	{
		Person tmp = *this;
		my_int++;
		return tmp;
	}
private:
	int my_int;
};
ostream& operator<<(ostream& cout, const Person& p)
{
	cout << p.getmy_int();
	return cout;
}
int main()
{
	Person p;
	/*cout << ++(++p) << endl;
	cout << p << endl;*/

	cout << p++ << endl;
	cout << p << endl;
	return 0;
}