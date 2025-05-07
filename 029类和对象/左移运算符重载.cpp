#include <iostream>
using namespace std;
class Person
{
friend ostream& operator<<(ostream& cout, Person& p);
friend int main();
private:
	int a;
	int b;
};
ostream& operator<<(ostream& cout, Person& p)
{
	//想让函数访问private有两种方法：get方法和友元
	cout << p.a << " " << p.b;
	//operate<<(cout,p)  简化 cout<<p;
	return cout;
}
int main()
{
	Person p;
	p.a = 20;
	p.b = 30;
	//main函数也可以设置为友元
	cout << p<<endl;//如何重载左移运算符

	return 0;
}