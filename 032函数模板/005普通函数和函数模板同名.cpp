#include <iostream>
using namespace std;
void myPrint(int a, int b)
{
	cout << "调用了普通函数" << endl;
}
template<class T>
void myPrint(T a, T b)
{
	cout << "调用了函数模板" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "调用了重载的函数模板" << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	/*myPrint(a, b);*/

	//通过 空模板参数列表 强制调用函数模板
	/*myPrint<>(a, b);*/

	int c = 30;
	/*myPrint(a, b, c);*/

	char c1 = 'c';
	char c2 = 'a';
	myPrint(c1, c2);
	//如果函数模板产生更好的匹配，优先调用函数模板
	return 0;
}