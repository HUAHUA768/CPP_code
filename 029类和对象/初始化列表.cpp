#include <iostream>
using namespace std;
class Person
{
private:
	int A;
	int B;
	int C;
public:
	//��ͳ��ʼ������
	/*Person(int a, int b, int c)
	{
		A = a;;
		B = b;
		C = c;
	}*/

	//�ó�ʼ���б������г�ʼ������
	Person(int a,int b,int c) :A(a), B(b), C(c)
	{

	}
	int getA()
	{
		return A;
	}
	int getB()
	{
		return B;
	}
	int getC()
	{
		return C;
	}
};
int main()
{
	Person p1(22,33,44);
	cout << p1.getA() << endl;
	cout << p1.getB() << endl;
	cout << p1.getC() << endl;

	return 0;
}