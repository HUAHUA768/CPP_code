#include <iostream>
using namespace std;
//�ֱ�������ͨд���Ͷ�̬д����ɼ�����
#include <string>
//��ͨд��
class Calculator
{
public:
	int a;
	int b;
	int getresult(string oper)
	{
		if (oper == "+")
		{
			return a + b;
		}
		else if (oper == "-")
		{
			return a - b;
		}
		else if (oper == "*")
		{
			return a * b;
		}
	}
	//���Ҫ����¹��ܣ���Ҫ��չ��������
	//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
};
//int main()
//{
//	Calculator c;
//	c.a = 10;
//	c.b = 20;
//	cout << c.a << "+" << c.b << " = " << c.getresult("+") << endl;
//
//	return 0;
//}

//�ö�̬ʵ�ּ�����

//ʵ�ּ�����������
class Abstract
{
public:
	int a;
	int b;
	virtual int getresult()
	{
		return 0;
	}
	Abstract(){}
	
};
//�ӷ�������
class AddCalculator :public Abstract
{
public:
	int getresult()
	{
		return a + b;
	}
};
//����������
class SubCalculator :public Abstract
{
public:
	int getresult()
	{
		return a - b;
	}
};

//�˷�������
class MulCalculator :public Abstract
{
public:
	int getresult()
	{
		return a * b;
	}
};

int main()
{
	//��̬ʹ������������ָ���������ָ���������
	Abstract* abc = new AddCalculator;
	abc->a = 20;
	abc->b = 30;
	cout << abc->a << "+" << abc->b << "=" << abc->getresult() << endl;
	//����ǵ�����
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->a = 500;
	abc->b = 400;
	cout << abc->a << "-" << abc->b << "=" << abc->getresult() << endl;
	delete abc;
	return 0;
}
