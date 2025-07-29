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
	//容器是否为空（与vector一致）
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	bool ret = d1.empty();
	if (ret)
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
	}
}
void test2()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	cout << "容器大小为：" << d1.size() << endl;
	//deque容器可以无限扩大，故没有容量这个属性
	d1.resize(5);
	PrintDeque(d1);

	d1.resize(15,100);
	PrintDeque(d1);
}
int main()
{
	/*test1();*/

	test2();
	return 0;
}