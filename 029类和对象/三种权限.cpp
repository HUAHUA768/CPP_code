#include <iostream>
using namespace std;
#include <string>
//class Person 
//{
//public:
//	string name;
//protected:
//	string Car;
//private:
//	string PassWord;
//public:
//	void func()
//	{
//		name = "����";
//		Car = "��˹��˹";
//		PassWord = "123456";
//		//����Ȩ�ޣ����ڿ��Է���
//	}
//};

class Person
{
private:
	string name;//�ɶ���д
	int age=18;//�ɶ� ��д ��������0~150
	string idol;//���ɶ���д
public://�ó�Ա����������ԵĶ�д
	//��������
	void setName(string n)
	{
		name = n;
	}
	//��ȡ����
	string getName()
	{
		return name;
	}

	//��������(0~150)
	void setAge(int ag)
	{
		if (ag >= 0 && ag <= 150)
		{
			age = ag;
		}
		else
		{
			cout << "���䲻��ȷ" << endl;
			return;
		}
	}
	int getAge()
	{
		return age;
	}
	void setIdol(string Ido)
	{
		idol = Ido;
	}

};
int main()
{
	//Person p1;
	//p1.name = "����";
	////p1.Car = "������";//����Ȩ�����ݣ����ⲻ���Է���
	////p1.PassWord = "123";//˽��Ȩ�����ݣ����ⲻ���Է���
	Person p1;
	p1.setName("����");
	cout << "����:"<<p1.getName() << endl;
	p1.setAge(160);
	cout << "���䣺" << p1.getAge() << endl;
	p1.setIdol("����");
	return 0;
}