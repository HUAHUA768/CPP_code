#include <iostream>
using namespace std;
//��̬��̬�Ͷ�̬��̬
class Animal
{
public:
	 virtual void speak()//�麯��
	{
		cout << "������ô��" << endl;
	}
};
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "Сè��ô��" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "��ô����" << endl;
	}
};
void doSpeak(Animal& ani)//Animal& ani=cat
//c++��������֮����������ת��������ֱ���ø������ý����������
{
	ani.speak();
	//������˵��
	//��̬��̬����ַ��󶨣��ڱ���׶�ȷ��������ַ
}

void test1()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}
//��ô��δﵽ��Сè˵������Ч���أ��ö�̬��̬����ַ���

void test2()
{
	//ȥ��virtual
	cout << "sizeof(Animal) = "<<sizeof(Animal) << endl;//1
	//����virtual���4
}
int main()
{
	/*test1();*/

	test2();
	return 0;
}