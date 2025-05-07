#include <iostream>
using namespace std;
class Person
{
public:
	int a;
	int b;
	/*Person operator+(Person &p)
	{
		Person tmp;
		tmp.a = a + p.a;
		tmp.b = b + p.b;
		return tmp;
	}*/
};

//全局函数重载
Person operator+ (Person& p1, Person& p2)
{
	Person tmp;
	tmp.a = p1.a + p2.a;
	tmp.b = p1.b + p2.b;
	return tmp;
}
int main()
{
	Person p1;
	p1.a = 10;
	p1.b = 20;
	Person p2;
	p2.a = 30;
	p2.b = 40;
	/*Person p3 = p1.operator+(p2);*/
	//也可以简化成
	Person p3 = p1 + p2;
	cout << "p3.a = " << p3.a << "  p3.b = " << p3.b << endl;
	return 0;
}