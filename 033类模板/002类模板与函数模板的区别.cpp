#include <iostream>
using namespace std;
#include <string>
//��ģ���뺯��ģ�������
template<class NameType,class AgeType=int>
//��ģ����ģ������б��п�����Ĭ�ϲ���
class Person
{
public:
	NameType name;
	AgeType age;
	Person(NameType name, AgeType age)
	{
		this->age = age;
		this->name = name;
	}
	void ShowPerson()
	{
		cout << "������" << this->name << "\t" << "���䣺" << this->age << endl;
	}
};
int main()
{
	Person<string>p1("�����", 99);
	p1.ShowPerson();
	return 0;

}