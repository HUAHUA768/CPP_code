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
//		name = "张三";
//		Car = "劳斯莱斯";
//		PassWord = "123456";
//		//三种权限：类内可以访问
//	}
//};

class Person
{
private:
	string name;//可读可写
	int age=18;//可读 可写 但必须在0~150
	string idol;//不可读可写
public://用成员方法完成属性的读写
	//设置姓名
	void setName(string n)
	{
		name = n;
	}
	//读取姓名
	string getName()
	{
		return name;
	}

	//设置年龄(0~150)
	void setAge(int ag)
	{
		if (ag >= 0 && ag <= 150)
		{
			age = ag;
		}
		else
		{
			cout << "年龄不正确" << endl;
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
	//p1.name = "李四";
	////p1.Car = "拖拉机";//保护权限内容，类外不可以访问
	////p1.PassWord = "123";//私有权限内容，类外不可以访问
	Person p1;
	p1.setName("张三");
	cout << "名字:"<<p1.getName() << endl;
	p1.setAge(160);
	cout << "年龄：" << p1.getAge() << endl;
	p1.setIdol("周深");
	return 0;
}