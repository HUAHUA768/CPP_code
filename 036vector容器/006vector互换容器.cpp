#include <iostream>
#include <vector>
using namespace std;
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "互换前：" << endl<<"v1:"<<endl;
	PrintVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	cout << "v2:" << endl;
	PrintVector(v2);

	v1.swap(v2);
	cout << "互换后：" << endl << "v1:" << endl;
	PrintVector(v1);
	cout << "v2:" << endl;
	PrintVector(v2);
}

//实际用途
void test2()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	vector<int>(v).swap(v);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
	//vector<int>(v)是匿名对象
}
int main()
{
	//test1();
	test2();
	return 0;
}