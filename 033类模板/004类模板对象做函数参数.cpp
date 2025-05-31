#include <iostream>
using namespace std;
#include <string>
template<class T1,class T2>
class Person
{
public:
	T1 name;
	T2 age;
	Person(T1 name, T2 age)
	{
		this->name = name;
		this->age = age;
	}
	void ShowPerson()
	{
		cout << "������" << this->name << "\t" << "���䣺" 
			<< this->age << endl;
	}
};

//1.ָ�����������
void PrintPerson1(Person<string, int>& p)
{
	p.ShowPerson();
}

//2.����ģ�廯
template<class T1, class T2>
void PrintPerson2(Person<T1, T2>& p)
{
	p.ShowPerson();

	//�����������Ƶ�����T1T2��ʲô����
	cout << "T1����Ϊ��" << typeid(T1).name() << endl;
	cout << "T2����Ϊ��" << typeid(T2).name() << endl;

}

//3.������ģ�廯
template<class T>
void PrintPerson3(T &p)
{
	p.ShowPerson();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}

void test01()
{
	//1.ָ�����������
	Person<string, int>p("�����", 999);
	PrintPerson1(p);
}
void test02()
{
	//2.����ģ�廯
	Person<string, int>p2("��˽�", 500);
	PrintPerson2(p2);
}
int main()
{
	

	//��ģ���������������
	
	/*test01();
	test02();*/
	//3.������ģ�廯
	Person<string, int>p3("ɳɮ", 400);
	PrintPerson3(p3);
	return 0;
}