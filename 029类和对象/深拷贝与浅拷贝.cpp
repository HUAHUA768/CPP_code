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
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}*/
	~Person()
	{
		if (p_height != NULL)
		{
			delete p_height;
			p_height = NULL;
		}
		cout << "���������ĵ���" << endl;
	}
	Person(int Age,int h)
	{
		age = Age;
		p_height = new int(h);
		cout << "�вι��캯���ĵ���" << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		p_height = new int(*p.p_height);
		cout << "�������캯���ĵ���" << endl;
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
	cout << "p1������Ϊ:" << p1.getAge() << " p1�����Ϊ:"
		<< *(p1.getheight()) << endl;
	cout << "p2������Ϊ:" << p2.getAge() << " p2�����Ϊ:"
		<< *(p2.getheight()) << endl;

	return 0;
}