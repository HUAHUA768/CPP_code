#include <iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>
void test1()
{
	MyArray <int>p1(5);
	MyArray <int>p2(p1);//拷贝构造
	MyArray <int>p3(10);
	p3 = p1;//operator=
}
void test2()
{
	MyArray <int>p1(5);
	for (int i = 0; i < 5; i++)
	{
		//p1[i] = i;//下标法
		p1.Push_Back(i);//尾插法
	}
	p1.Pop_Back();//尾删法
	cout << "p1的容量为：" << p1.getCapacity() << endl;
	cout << "p1的大小为：" << p1.getSize() << endl;
	for (int i = 0; i < p1.getSize(); i++)
	{
		cout << p1[i] << endl;
	}
}

class Person
{
public:
	string name;
	int age;
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	~Person()
	{

	}
	Person()
	{

	}
};

void PrintPersonArray(const MyArray<Person>& arr1)
{
	for (int i = 0; i < arr1.getSize(); i++)
	{
		cout << "姓名：" << arr1[i].name << "\t年龄：" << arr1[i].age << endl;
	}
}
void test3()
{
	MyArray<Person>arr1(10);
	Person p1("孙悟空", 999);
	Person p2("韩信", 20);
	arr1.Push_Back(p1);
	arr1.Push_Back(p2);

	//打印数组
	PrintPersonArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;
}
int main()
{
	//test2();//测试内置数据类型
	test3();//测试自定义数据类型

	return 0;
}