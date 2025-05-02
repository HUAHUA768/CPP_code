#include <iostream>
using namespace std;
int main()
{
	float f1 = 3.14f;//为什么要加f
	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1 << endl;
	//科学计数法
	float f2 = 3e2;   //表示3*10²
		double d2 = 3e-2;
	cout << f2 << endl;
	cout << d2 << endl;


	system("pause");
	return 0;

}