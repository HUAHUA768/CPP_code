#include <iostream>
#include <set>
using namespace std;
void test1()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	set<int>::iterator pos = s1.find(20);
	//若找不到，会返回end迭代器
	if (pos != s1.end())
	{
		cout << "找到了元素:"<<*pos << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}
}

//统计
void test2()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(20); 
	s1.insert(20);
	int num = s1.count(20);//返回容器中20的个数
	cout << "容器中20的个数为：" << num << endl;

}
int main()
{
	//test1();
	test2();
	return 0;
}