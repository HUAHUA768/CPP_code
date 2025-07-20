#include <iostream>
#include<vector>
using namespace std;
//容量：容器空间
//大小：元素个数
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
	PrintVector(v1);
	//判断是否为空
	if (v1.empty())
	{
		cout << "数组为空" << endl;
	}
	else
	{
		cout << "数组不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15,100);
	cout << "v1的大小为：" << v1.size() << endl;
	PrintVector(v1);

	v1.resize(5);
	PrintVector(v1);
}
int main()
{
	//vector容量和大小操作
	test1();
	return 0;
}