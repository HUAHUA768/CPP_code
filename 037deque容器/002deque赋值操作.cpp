#include <iostream>
#include <deque>
using namespace std;
void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	deque<int>d2 = d1;
	PrintDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end() - 1);
	PrintDeque(d3);

	d3.assign(10, 100);
	PrintDeque(d3);
}
int main()
{
	test1();
	return 0;
}