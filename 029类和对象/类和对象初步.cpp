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
//	//ͨ�����������������
//	Circle c1;
//	c1.r = 10;
//	cout << "Բ���ܳ�Ϊ��" << c1.Calculate() << endl;
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
		cout << "������" << name <<endl<< "ѧ�ţ�"<<ID << endl;
	}
};
int main()
{
	Student s1;
	s1.SetName("����");
	s1.SetID(13);
	s1.Show();
	return 0;
}