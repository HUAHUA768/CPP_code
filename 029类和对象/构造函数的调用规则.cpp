#include <iostream>
using namespace std;



class Person
{
private:
	int age;
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	Person(int Age)
	{
		age = Age;
		cout << "�вι��캯���ĵ���" << endl;
	}
	/*Person(const Person& p)
	{
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
	}*/
	int getAge()
	{
		return age;
	}
};
int main()
{
	//���캯���ĵ��ù���

	//����û��ṩ�вι��캯����������������ṩĬ�Ϲ��캯��
	//�����ṩĬ�Ͽ������캯��
	Person p(18);
	Person p1(p);
	cout << "p������Ϊ" << p.getAge() << endl;
	cout << "p1������Ϊ" << p1.getAge() << endl;
	//���ǰѿ������캯��ע�͵������Ǵ���p1������ɿ�����
	// ˵���������ṩ��Ĭ�Ͽ�������


	//����û��ṩ�������죬������������ṩ�������캯��
	/*Person p(18);*/
	//���ǰ��������캯��ע�͵���ֻ�����������죬
	//�����޷������вι��캯��˵��������û���ṩ�вι��캯��
	return 0;
}