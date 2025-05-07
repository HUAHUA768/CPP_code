#include <iostream>
using namespace std;
class Person
{
private:
	int A;
	int B;
	int C;
public:
	//传统初始化操作
	/*Person(int a, int b, int c)
	{
		A = a;;
		B = b;
		C = c;
	}*/

	//用初始化列表来进行初始化操作
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