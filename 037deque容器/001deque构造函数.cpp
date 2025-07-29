#include<iostream>
#include<deque>
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
	/*PrintDeque(d1);*/

	//区间构造
	deque<int>d2(d1.begin(), d1.end() - 1);
	PrintDeque(d2);
	
	deque<int>d3(10, 5);
	PrintDeque(d3);

	deque<int>d4(d3);
	PrintDeque(d4);//拷贝构造
}
int main()
{
	test1();
	return 0;
}