#include <iostream>
using namespace std;
class Base
{
public:
	int a;
	Base()
	{
		a = 100;
	}
	void func()
	{
		cout << "Base下的func函数调用" << endl;
	}
	void func(int x)
	{
		cout << "base下有参的func函数调用" << endl;
	}
};

class Son:public Base
{
public:
	int a;
	Son()
	{
		a = 200;
	}
	void func()
	{
		cout << "Son下的func函数调用" << endl;
	}
};

void test1()
{
	Son s1;
	cout << "Son下的a = " << s1.a << endl;
	cout << "Base下的a = " << s1.Base::a << endl;
	//加作用域即可
}

//同名函数调用
void test2()
{
	Son s2;
	s2.func();
	s2.Base::func();
}

void test3()
{
	Son s3;
	s3.Base::func(100);
}
int main()
{
	/*test1();*/
	/*test2();*/
	test3();
	return 0;
}