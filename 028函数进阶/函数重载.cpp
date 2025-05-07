#include <iostream>
using namespace std;
//函数重载碰到默认参数
void func(int a)
{
	cout << "func(int a)" << endl;
}
void func(int a,int b=10)
{
	cout << "func(int a,int b=10)" << endl;
}
int main()
{
	func(10);

	return 0;
}