#include<iostream>
#include<vector>
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
	v1.reserve(100000);
	//预留空间
	int* p = NULL;
	int num = 0;//统计开辟次数
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);

		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "num = " << num << endl;

	cout << "v1的大小:" << v1.size() << endl;
	cout << "v1的容量：" << v1.capacity() << endl;

	/*v1.resize(13);
	cout << "v1的大小:" << v1.size() << endl;
	cout << "v1的容量：" << v1.capacity() << endl;
	PrintVector(v1);*/

	
}
int main()
{
	test1();
	return 0;
}