#include <iostream>
#include <set>
using namespace std;
void PrintMultiset(const multiset<int>& s)
{
	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	set<int>s1;
	s1.insert(30);
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	pair < set<int>::iterator, bool > p = s1.insert(20);
	if (p.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
}
//multiset
void test2()
{
	multiset<int>ms;
	ms.insert(10);
	ms.insert(40);
	ms.insert(30);
	ms.insert(20);

	//允许重复插入
	ms.insert(10);
	ms.insert(10);

	PrintMultiset(ms);
}
int main()
{
	//test1();
	test2();
	return 0;
}