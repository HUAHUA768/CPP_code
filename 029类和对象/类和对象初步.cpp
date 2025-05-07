#include <iostream>
using namespace std;
#include <string>
//const double PI = 3.14;
//class Circle
//{
//public:
//	int r;
//	double Calculate()
//	{
//		return 2 * PI * r;
//	}
//
//};
//int main()
//{
//	//通过类来创建具体对象
//	Circle c1;
//	c1.r = 10;
//	cout << "圆的周长为：" << c1.Calculate() << endl;
//	return 0;
//}

class Student
{
public:
	string name;
	int ID;
	void SetName(string n)
	{
		name = n;
	}
	void SetID(int id)
	{
		ID = id;
	}
	void Show()
	{
		cout << "姓名：" << name <<endl<< "学号："<<ID << endl;
	}
};
int main()
{
	Student s1;
	s1.SetName("大西");
	s1.SetID(13);
	s1.Show();
	return 0;
}