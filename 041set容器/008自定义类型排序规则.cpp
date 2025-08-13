#include <iostream>
#include <set>
using namespace std;
//set存放自定义数据类型，排序规则
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

class ComparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return (p1.age < p2.age);
	}
};
void PrintSet(const set<Person, ComparePerson>& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		//迭代器可以写成auto it
		cout << "姓名：" << (*it).name << "\t年龄：" << (*it).age << endl;
	}
}
void test1()
{
	//自定义排序类型都会指定排序规则
	set<Person, ComparePerson>s;
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	PrintSet(s);
}
int main()
{
	test1();
	return 0;
}


