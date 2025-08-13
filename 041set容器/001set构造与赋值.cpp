#include <iostream>
#include <set>
using namespace std;
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
	//set容器插入数据只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	//会过滤掉重复元素
	PrintSet(s1);
	//元素自动被排序（升序）

	set<int>s2(s1);
	PrintSet(s2);

	set<int>s3;
	s3 = s1;
	PrintSet(s3);
}
int main()
{
	test1();
	return 0;
}