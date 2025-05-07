#include <iostream>
using namespace std;
class Base//抽象类
{
public:
	//纯虚函数
	virtual void func() = 0;
};
//void test1()
//{
//	Base b;//抽象类无法实例化对象
//}

class Son :public Base
{
	void func()
	{
		cout << "func函数调用" << endl;
	}
};
int main()
{
	//Son s;//若子类中没有重写纯虚函数，那么子类依旧是抽象类

	Base* p = new Son;
	p->func();
	//多态的使用：父类指针/引用指向子类对象
	delete p;
	return 0;
}