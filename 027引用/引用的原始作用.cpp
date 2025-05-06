#include <iostream>
using namespace std;
int main()
{
	//int a = 10;
	////引用的原始作用：给变量起别名
	//int& b = a;
	//b = 20;
	//cout << a << endl;

	
	int a = 10;
	//int &b;//引用必须初始化
	int& b = a;
	return 0;
}