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
	PrintDeque(d1);

	//头插
	d1.push_front(100);
	PrintDeque(d1);

	//头删
	d1.pop_front();
	PrintDeque(d1);

	//插入
	/*d1.insert(d1.begin() + 2, 100);*/
	d1.insert(d1.begin() + 2, 3, 666);
	//d1.clear();//清空容器
	PrintDeque(d1);

	d1.erase(d1.begin() + 1, d1.end() - 2);
	PrintDeque(d1);

	d1.erase(d1.begin());
	PrintDeque(d1);
}
void test2()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	deque<int>d2;
	for (int i = 0; i < 3; i++)
	{
		d2.push_back(100);
	}
	PrintDeque(d2);

	//插入区间
	d2.insert(d2.begin() + 1, d1.begin(), d1.end());
	PrintDeque(d2);

}
int main()
{
	//test1();
	test2();
	return 0;
}