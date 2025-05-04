#include <iostream>
using namespace std;
int main()
{
	//三目运算符
	int a = 66;
	int b = 10;
	int c = 0;
	c = (a > b ? a : b); //要不要括号都可以
		cout << "c=" << c << endl;
		//三目输出的结果是变量，可以赋值
		(a > b ? a : b) = 100;
		cout << "a=" << a<< endl;
		cout << "b=" << b << endl;
	system("pause");
	return 0;
}