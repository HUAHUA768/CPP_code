#include <iostream>
using namespace std;
//分别利用普通写法和多态写法完成计算器
#include <string>
//普通写法
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
	//如果要添加新功能，需要扩展函数代码
	//开闭原则：对扩展进行开放，对修改进行关闭
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

//用多态实现计算器

//实现计算器抽象类
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
//加法计算类
class AddCalculator :public Abstract
{
public:
	int getresult()
	{
		return a + b;
	}
};
//减法计算类
class SubCalculator :public Abstract
{
public:
	int getresult()
	{
		return a - b;
	}
};

//乘法计算类
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
	//多态使用条件：父类指针或者引用指向子类对象
	Abstract* abc = new AddCalculator;
	abc->a = 20;
	abc->b = 30;
	cout << abc->a << "+" << abc->b << "=" << abc->getresult() << endl;
	//用完记得销毁
	delete abc;

	//减法计算
	abc = new SubCalculator;
	abc->a = 500;
	abc->b = 400;
	cout << abc->a << "-" << abc->b << "=" << abc->getresult() << endl;
	delete abc;
	return 0;
}
