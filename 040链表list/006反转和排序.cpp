#include <iostream>
#include <list>
using namespace std;
#include <algorithm>
void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1, int v2)
{
	return (v1 > v2);//大于返回真，不大于返回假
}
void test1()
{
	list<int>L1;
	L1.push_back(25);
	L1.push_back(78);
	L1.push_front(105);
	L1.push_front(768);
	PrintList(L1);

	//反转
	L1.reverse();
	PrintList(L1);

	//所有不支持随机访问的迭代器，不能使用标准算法
	//不支持随机访问迭代器的容器，内部会提供一些算法
	//sort(L1.begin(), L1.end());
	L1.sort();
	//默认升序
	PrintList(L1);

	//如何实现降序？   自定义函数
	L1.sort(myCompare);
	PrintList(L1);
	
}
int main()
{
	test1();
	return 0;
}