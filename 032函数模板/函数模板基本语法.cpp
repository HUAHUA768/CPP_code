#include <iostream>
using namespace std;
template <typename T>
//定义一个自定义数据类型T
void mySwap(T& a, T& b)
//定义函数模板
{
	T tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	//有两种方式使用函数模板
	int a = 10;
	int b = 20;
	//1.自动类型推导
	/*mySwap(a, b);*/

	//2.显示指定类型
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}