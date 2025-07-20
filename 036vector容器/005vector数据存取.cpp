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
	/*PrintVector(v1);*/

	//用operator[]访问
	/*for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;*/

	//利用at方法访问
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << v1.front() << endl;
	//front方法返回数组第一个元素
	cout << v1.back() << endl;
}
int main()
{
	test1();

	return 0;
}