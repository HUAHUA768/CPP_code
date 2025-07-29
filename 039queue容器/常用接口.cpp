#include<iostream>
#include <queue>
using namespace std;
#include <string>
class Person
{
public:
	string name;
	int age;
	Person(string name,int age)
	{
		this->name = name;
		this->age = age;
	}
	
};
void test1()
{
	queue<Person>q;
	Person p1("大西", 21);
	Person p2("唐曾", 23);
	Person p3("猴子", 26);
	Person p4("直斌", 29);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "队尾元素为：" << q.back().name << "\t" << q.back().age << endl;
	while (q.empty() != true)
	{
		cout << "姓名：" << q.front().name << "\t年龄：" << q.front().age << endl;
		q.pop();
	}
	cout << "队列大小为：" << q.size() << endl;
}
int main()
{
	test1();
	return 0;
}