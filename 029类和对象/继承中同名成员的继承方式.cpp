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
		cout << "Base�µ�func��������" << endl;
	}
	void func(int x)
	{
		cout << "base���вε�func��������" << endl;
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
		cout << "Son�µ�func��������" << endl;
	}
};

void test1()
{
	Son s1;
	cout << "Son�µ�a = " << s1.a << endl;
	cout << "Base�µ�a = " << s1.Base::a << endl;
	//�������򼴿�
}

//ͬ����������
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