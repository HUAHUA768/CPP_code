#include <iostream>
using namespace std;
int main()
{
	//相等于==
	int a = 166;
	int b = 666;
	cout << (a == b) << endl;//加括号优先计算

	//不等于！=
	 cout<<(a!=b)<<endl;
	//大于
	 cout << (a > b) << endl;
	//小于
	 cout << (a < b) << endl;

	//大于等于
	 cout << (a >= b) << endl;

	//小于等于
	 cout << (a <= b) << endl;

	system("pause");
	return 0;
}