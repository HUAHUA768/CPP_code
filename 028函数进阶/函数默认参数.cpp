#include <iostream>
using namespace std;
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
int main()
{
	cout << func(10) << endl;//60
	cout << func(10,30) << endl;//70
	return 0;
}