#include <iostream>
#include <list>
#include <string>
using namespace std;
//自定义类型Person list容器 排序
//按年龄升序，若年龄相同，再按升高进行降序
class Person
{
public:
	string name;
	int age;
	int height;
	Person(string name, int age, int height)
	{
		this->name = name;
		this->age = age;
		this->height = height;
    }
};

//编写排序法则  此法则只有年龄
bool Compare_by_Age(const Person& p1, const Person& p2)
{
	return(p1.age < p2.age);
}

//我们要写一个既有年龄又有身高的法则
bool Compare_Person(const Person& p1, const Person& p2)
{
	if (p1.age == p2.age)
	{
		//按身高降序
		return (p1.height > p2.height);
	}
	return(p1.age < p2.age);
}
int main()
{
	list<Person>L;
	Person p1("孙权",35,175);
	Person p2("曹操",45,180);
	Person p3("刘备",40,170);
	Person p4("赵云",25,190);
	Person p5("张飞",35,160);
	Person p6("关羽",35,200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	//L.sort(Compare_by_Age);
	L.sort(Compare_Person);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it).name << "\t" << (*it).age << "\t" << (*it).height << endl;
		//也可以：it->age，it相当于指针
	}
	
	return 0;
}
