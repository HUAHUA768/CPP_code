#include <iostream>
#include <deque>
using namespace std;
void test1()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	//at方法访问
	d1.at(5) = 1000;
	cout << d1.at(5) << endl;

	//[]访问
	cout << d1[0] << endl;

	//front
	cout << d1.front() << endl;
	cout << d1.back() << endl;
}
int main()
{
	test1();

	return 0;
}