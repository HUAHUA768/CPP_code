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
	//vector的插入与删除
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	/*v1.pop_back();*/
	//尾删

	v1.insert(v1.begin(),4, 222);//插入数据
	PrintVector(v1);

	//用迭代器指定删除某个元素
	v1.erase(v1.begin());
	PrintVector(v1);

	//删除区间之内的元素
	v1.erase(v1.begin(), v1.end() - 1);
	PrintVector(v1);

	v1.clear();
	PrintVector(v1);
}
int main()
{
	test1();
	return 0;
}