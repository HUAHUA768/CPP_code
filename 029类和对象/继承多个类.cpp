#include <iostream>
using namespace std;
class Base1
{
public:
	int a;
	Base1()
	{
		a = 100;
	}
};
class Base2
{
public:
	int b;
	Base2()
	{
		b = 200;
	}
};

//¼Ì³Ğ¶à¸öÀà
class Son :public Base1, public Base2
{
public:
	int c;
	int d;
	Son()
	{
		c = 400;
		d = 500;
	}
};
int main()
{
	Son s;
	cout << sizeof(s) << endl;

	return 0;
}