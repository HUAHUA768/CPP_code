#include <iostream>
using namespace std;
class person 
{
private:
	int age;
public:
	person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	//��ͨ���캯��
	person(int a)
	{
		cout << "�вι��캯���ĵ���" << endl;
		age = a;
	}
	person(const person& p)
	{
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
		//�������캯��
	}
	~person()
	{
		cout << "���������ĵ���" << endl;
	}//��������

	int getage()
	{
		return age;
	}

};
void doWork(person p)
{
	cout << "������dowork����" << endl;
}
person dowork2()
{
	person p1;
	//�������ý�����p1�ᱻ����
	cout << &p1 << endl;
	return p1;//����һ��p1��Ϊ����ֵ
}
int main()
{
	//1.���ŷ�
	/*person p1;
	person p2(18);
	person p3(p2);*/

	//2.��ʾ��
	//person p1;
	//person p2 = person(15);
	//person p3 = person(p2);//�������캯��

	//�������캯���ĵ���ʱ��
	//1.��¡
	/*person p1(18);
	person p2(p1);*/

	//2.������ֵ
	/*person p1(15);
	doWork(p1);*/

	//3.ֵ��ʽ���ؾֲ�����
	person p = dowork2();
	cout << &p << endl;
	return 0;
}