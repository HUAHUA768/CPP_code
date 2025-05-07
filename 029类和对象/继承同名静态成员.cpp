#include <iostream>
using namespace std;
//继承同名静态成员的处理方式
//编译阶段分配内存，所有对象共享同一块内存
class Base
{
public:
	static int a;
	//同名静态成员函数
	static void func()
	{
		cout << "Base-static void func" << endl;
	}

};
//类外记得初始化
int Base::a = 100;
class Son:public Base
{
public:
	static int a;
	static void func()
	{
		cout << "Son-static void func" << endl;
	}
};
int Son::a = 200;
void test1()
{
	//通过对象访问
	cout << "通过对象访问" << endl;
	Son s1;
	cout << "Son中的a = " << s1.a << endl;
	cout << "Base中的a = " << s1.Base::a << endl;
	cout << endl;
	
}
void test2()
{
	//通过类名访问
	cout << "通过类名访问:" << endl;
	cout << "Son下的a = " << Son::a << endl;
	cout << "Base下的a = " << Son::Base::a << endl;
}

//同名静态成员函数

void test3()
{
	/*Son s3;
	s3.func();
	s3.Base::func();*/

	//通过类名
	Son::func();
	Son::Base::func();

}
int main()
{
	/*test1();*/
	/*test2();*/
	test3();
	return 0;
}