#include <iostream>
using namespace std;
class Person
{
public:
	static int m;
	//类内声明
private:
	//静态成员变量也是有访问权限的
	static int n;
};
//类外初始化
int Person::m = 100;
int Person::n = 200;
int main()
{
	/*Person p1;
	cout << p1.m << endl;
	Person p2;
	p2.m = 200;
	cout << p1.m << endl;*/
	//所有对象共享同一份数据

	//还可以通过类名来访问静态成员变量
	cout << Person::m << endl;
	//cout << Person::n << endl;
	//类外访问不到私有静态成员变量
	return 0;
}