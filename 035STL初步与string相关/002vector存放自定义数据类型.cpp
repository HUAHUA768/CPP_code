#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
//vector存放自定义数据类型

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
};
void myPrint(Person p)
{
	cout << "姓名：" << p.name << "\t年龄：" << p.age << endl;
}
void test1()
{
	vector<Person> v;
	Person p1("大西", 20);
	Person p2("张三", 25);
	Person p3("黄小厨", 26);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//遍历
	for_each(v.begin(), v.end(), myPrint);
}

//存放自定义数据类型  的指针
void test2()
{
	vector<Person*> v;
	Person p1("大西", 20);
	Person p2("张三", 25);
	Person p3("好想吃", 26);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	//遍历
	for (vector<Person*>::iterator it=v.begin(); it < v.end(); it++)
	{
		cout << "姓名：" << (*it)->name << "\t年龄：" << (*it)->age << endl;
	}
}
int main()
{
	/*test1();*/
	test2();
	return 0;
}