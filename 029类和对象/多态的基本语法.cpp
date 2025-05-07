#include <iostream>
using namespace std;
//静态多态和动态多态
class Animal
{
public:
	 virtual void speak()//虚函数
	{
		cout << "动物怎么叫" << endl;
	}
};
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫怎么叫" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "怎么狗叫" << endl;
	}
};
void doSpeak(Animal& ani)//Animal& ani=cat
//c++父类子类之间无需类型转化，可以直接让父类引用接收子类对象
{
	ani.speak();
	//动物在说话
	//静态多态，地址早绑定，在编译阶段确定函数地址
}

void test1()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}
//那么如何达到“小猫说话”的效果呢？用动态多态，地址晚绑定

void test2()
{
	//去掉virtual
	cout << "sizeof(Animal) = "<<sizeof(Animal) << endl;//1
	//加上virtual变成4
}
int main()
{
	/*test1();*/

	test2();
	return 0;
}