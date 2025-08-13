#include <iostream>
#include <set>
using namespace std;
//set容器的大小和交换
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
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	if (s1.empty() == true)
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "集合容器的大小为：" << s1.size() << endl;
	}
	PrintSet(s1);
}
void test2()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int>s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);

	s1.swap(s2);
	cout << "s1元素：";
	PrintSet(s1);
	cout << "s2元素：";
	PrintSet(s2);
}
int main()
{
	//test1();
	test2();
	return 0;
}