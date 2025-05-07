#include <iostream>
using namespace std;



class Person
{
private:
	int age;
	int* p_height;
public:
	/*Person()
	{
		cout << "默认构造函数的调用" << endl;
	}*/
	~Person()
	{
		if (p_height != NULL)
		{
			delete p_height;
			p_height = NULL;
		}
		cout << "析构函数的调用" << endl;
	}
	Person(int Age,int h)
	{
		age = Age;
		p_height = new int(h);
		cout << "有参构造函数的调用" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		p_height = new int(*p.p_height);
		cout << "拷贝构造函数的调用" << endl;
	}
	int getAge()
	{
		return age;
	}
	int* getheight()
	{
		return p_height;
	}
};
int main()
{
	Person p1(18, 160);
	Person p2(p1);
	cout << "p1的年龄为:" << p1.getAge() << " p1的身高为:"
		<< *(p1.getheight()) << endl;
	cout << "p2的年龄为:" << p2.getAge() << " p2的身高为:"
		<< *(p2.getheight()) << endl;

	return 0;
}