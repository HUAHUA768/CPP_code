#include <iostream>
using namespace std;
#include <string>
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯���ĵ���" << endl;
	}
	/*virtual ~Animal()
	{
		cout << "Animal���������ĵ���" << endl;
	}*/
	virtual ~Animal() = 0;
	//������������Ҫ������Ҳ��Ҫʵ��
	virtual void speak() = 0;
};
Animal::~Animal()
{
	cout << "Animal�������������ĵ���" << endl;
}

class Cat :public Animal
{
public:
	virtual void speak()
	{
		cout <<*name<< "Сè�ε���ô��" << endl;
		
	}
	Cat(string name)
	{
		cout << "Cat���캯���ĵ���" << endl;
		this->name = new string(name);
		/*  *this->name = name;*/
		//Ӧ���������������ͷŶ������ڴ�
	}
	string* name;//�ڶ������洴����Ա����������������������޷��ͷ���һ��
	//�ڴ��
	~Cat()
	{
		cout << "Cat���������ĵ���" << endl;
		if (name != NULL)
		{
			delete name;
			name = NULL;
		}
	}
};
int main()
{
	Animal* abc = new Cat("Coke");
	abc->speak();
	delete abc;

	//���˴��������������Ҳ���ڳ����࣬Ҳ�޷�ʵ��������
	return 0;
}