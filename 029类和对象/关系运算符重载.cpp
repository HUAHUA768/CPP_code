#include <iostream>
using namespace std;
#include <string>
//重载==和！=
class Person
{
public:
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	bool operator==(Person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		return false;
	}
	bool operator!=(Person& p)
	{
		if (this->m_age != p.m_age || this->m_name != p.m_name)
		{
			return true;
		}
		return false;
	}
	string m_name;
	int m_age;
};
int main()
{
	Person p1 = { "Tom",18 };
	Person p2 = { "Tom",18 };
	/*if (p1 == p2)
	{
		cout << "p1和p2是相当的" << endl;
	}
	else
	{
		cout << "p1和p2是不相当的" << endl;

	}*/

	if (p1 != p2)
	{
		cout << "p1和p2是不相当的" << endl;
	}
	else
	{
		cout << "p1和p2是相当的" << endl;

	}

	return 0;
}