#include <iostream>
using namespace std;
int& test1()
{
	static int a = 10;
	return a;
}
int main()
{
	int& ret = test1();
	cout << "ret = " << ret << endl;
	test1() = 1000;
	cout << "ret = " << ret << endl;
	return 0;
}