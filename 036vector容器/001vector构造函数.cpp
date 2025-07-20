#include <iostream>
#include <vector>
using namespace std;
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
}
void test1()
{
	vector<int>v1;//默认构造（无参构造）
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//PrintVector(v1);

	vector<int>v2(v1.begin(), v1.end());
	//用区间方式进行构造
	/*PrintVector(v2);*/

	vector<int>v3(10, 100);
	//n个elem构造
	/*PrintVector(v3);*/

	//拷贝构造
	vector<int>v4(v3);
	PrintVector(v4);

}
int main()
{
	test1();
	return 0;
}