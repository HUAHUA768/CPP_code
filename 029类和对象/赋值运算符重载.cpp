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
	//���� ��ֵ�����
	Person& operator=(Person& p)
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//Ӧ�����ж�p2ԭ���Ƿ��������ڶ����ϣ�����У��ͷŸɾ������¿���
		m_age = new int(*p.m_age);
		return *this;
		
	}
	int* m_age;
};
int main()
{
	//Person p1(18);
	//Person p2(20);
	//p2 = p1;//ֱ�Ӹ���ָ�����ֵ��ǳ������
	////�����ͷ�������
	////����������Ҫ���ظ�ֵ�����=����p2��m_age���Ǽ򵥵ĸ��Ƶ�ַ
	//cout << "p1���䣺" << *p1.m_age << endl;
	//cout << "p2���䣺" << *p2.m_age << endl;

	//��û������
	Person p1(18);
	Person p2(20);
	Person p3(25);
	p1 = p2 = p3;
	//�������س�����=����Ҫʵ�����Ȳ���
	//��ôp2=p3֮����Ҫ����p2����

	cout << "p1���䣺" << *p1.m_age << endl;
	cout << "p2���䣺" << *p2.m_age << endl;
	cout << "p3���䣺" << *p3.m_age << endl;

	return 0;
}