#include <iostream>
using namespace std;
#include <string>
//����==�ͣ�=
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
		cout << "p1��p2���൱��" << endl;
	}
	else
	{
		cout << "p1��p2�ǲ��൱��" << endl;

	}*/

	if (p1 != p2)
	{
		cout << "p1��p2�ǲ��൱��" << endl;
	}
	else
	{
		cout << "p1��p2���൱��" << endl;

	}

	return 0;
}