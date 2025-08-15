#include <iostream>
#include <map>
using namespace std;
class MyCompare
{
public:
	bool operator()(const int &v1, const int &v2) const
	{
		return v1 > v2;
	}
};
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
void test1()
{
	map<int, int, MyCompare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "\t\tvalue = " << it->second << endl;
	}
}
class Person_Compare
{
public:
	bool operator()(const int &v1,const int &v2) const
	{
		return (v1 > v2);
	}
	
};
void test2()
{
	map<int, Person , Person_Compare>m;
	Person p1("花海", 24);
	Person p2("清融", 21);
	Person p3("子阳", 25);
	Person p4("坦然", 21);
	Person p5("易铮", 23);
	m.insert({1,p1});
	m.insert({2,p2});
	m.insert({3,p3});
	m.insert({4,p4});
	m.insert({5,p5});
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first;
		cout << "\t姓名：" << it->second.name << "\t年龄：" << it->second.age << endl;
	}
}
int main()
{
	//test1();
	//回忆一下自定义类型排序规则，如何编写
	test2();
	return 0;
}