#include <iostream>
#include<deque>
using namespace std;
#include<algorithm>//标准算法头文件
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
	d1.push_back(100);
	d1.push_front(989);
	d1.push_back(94);
	d1.push_back(1002);
	//989 100 94 1002
	//排序操作
	sort(d1.begin(), d1.end());//是系统提供的一种标准算法
	PrintDeque(d1);
}
int main()
{
	test1();
	return 0;
}