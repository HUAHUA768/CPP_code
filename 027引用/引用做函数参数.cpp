#include <iostream>
using namespace std;
//用引用的方式实现交换函数
void Swap(int &a,int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//引用传递，形参也可以修饰实参
	return 0;
}