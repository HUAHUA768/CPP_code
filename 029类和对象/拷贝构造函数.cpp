#include <iostream>
using namespace std;
class person 
{
private:
	int age;
public:
	person()
	{
		cout << "默认构造函数的调用" << endl;
	}
	//普通构造函数
	person(int a)
	{
		cout << "有参构造函数的调用" << endl;
		age = a;
	}
	person(const person& p)
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
		//拷贝构造函数
	}
	~person()
	{
		cout << "析构函数的调用" << endl;
	}//析构函数

	int getage()
	{
		return age;
	}

};
void doWork(person p)
{
	cout << "这里是dowork函数" << endl;
}
person dowork2()
{
	person p1;
	//函数调用结束后，p1会被销毁
	cout << &p1 << endl;
	return p1;//复制一份p1作为返回值
}
int main()
{
	//1.括号法
	/*person p1;
	person p2(18);
	person p3(p2);*/

	//2.显示法
	//person p1;
	//person p2 = person(15);
	//person p3 = person(p2);//拷贝构造函数

	//拷贝构造函数的调用时机
	//1.克隆
	/*person p1(18);
	person p2(p1);*/

	//2.函数传值
	/*person p1(15);
	doWork(p1);*/

	//3.值方式返回局部对象
	person p = dowork2();
	cout << &p << endl;
	return 0;
}