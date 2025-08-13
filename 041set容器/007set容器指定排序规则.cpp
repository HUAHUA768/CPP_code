#include <iostream>
using namespace std;
#include <set>
class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return (v1 > v2);
	}
};
void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	PrintSet(s1);

	//指定排序规则为从大到小
	set<int,MyCompare>s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	s2.insert(50);
	for (set<int,MyCompare>::const_iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


int main()
{
	test1();
	
	return 0;
}