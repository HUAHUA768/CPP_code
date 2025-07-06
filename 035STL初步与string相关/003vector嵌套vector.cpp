#include <iostream>
using namespace std;
#include <vector>
void test1()
{
	//vector嵌套vector，类似于二维数组
	vector< vector<int> >v;

	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	//将小容器插入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//遍历
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it  --->  vector<int>
		for (vector<int>::iterator itt = (*it).begin(); itt != (*it).end(); itt++)
		{
			cout << *itt << " ";
		}
		cout << endl;
	}
}
int main()
{
	test1();

	return 0;
}