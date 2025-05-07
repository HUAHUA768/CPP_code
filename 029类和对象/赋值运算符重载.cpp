#include <iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		m_age = new int(age);
	}
	~Person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//重载 赋值运算符
	Person& operator=(Person& p)
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//应该先判断p2原本是否有属性在堆区上，如果有，释放干净再重新开辟
		m_age = new int(*p.m_age);
		return *this;
		
	}
	int* m_age;
};
int main()
{
	//Person p1(18);
	//Person p2(20);
	//p2 = p1;//直接复制指针的数值（浅拷贝）
	////析构释放了两次
	////所以我们需要重载赋值运算符=，让p2的m_age不是简单的复制地址
	//cout << "p1年龄：" << *p1.m_age << endl;
	//cout << "p2年龄：" << *p2.m_age << endl;

	//还没结束！
	Person p1(18);
	Person p2(20);
	Person p3(25);
	p1 = p2 = p3;
	//我们重载出来的=还需要实现连等操作
	//那么p2=p3之后还需要返回p2本身

	cout << "p1年龄：" << *p1.m_age << endl;
	cout << "p2年龄：" << *p2.m_age << endl;
	cout << "p3年龄：" << *p3.m_age << endl;

	return 0;
}