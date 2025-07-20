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
	//vector赋值
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	//operator=赋值
	vector<int>v2 = v1;
	//PrintVector(v2);

	//assign赋值
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	PrintVector(v3);

	//n个element
	vector<int>v4;
	v4.assign(10, 5);
	PrintVector(v4);
}
int main()
{
	test1();
	return 0;
}