#include <iostream>
using namespace std;
#include <string>
class Phone
{
public:
	string Brand;
	Phone(string brand)
	{
		Brand = brand;
		cout << "Phone���캯���ĵ���" << endl;
	}
	~Phone()
	{
		cout << "Phone���������ĵ���" << endl;
	}
};
class Person
{
public:
	string name;
	Phone ph;
	//�൱��Phone ph=brand_name ��ʽת����
	Person(string Name, string brand_name):name(Name),
		ph(brand_name)
	{
		cout << "Person���캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}
};
int main()
{
	Person p("����", "ƻ��16Pro");
	cout << p.name << p.ph.Brand << endl;
	//�������ˣ�������Person���컹��Phone���죿
	return 0;
}