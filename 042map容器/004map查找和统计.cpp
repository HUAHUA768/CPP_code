#include <iostream>
#include <map>
using namespace std;
int main()
{
	map<int,int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));
	//key=3的元素只能有一个
	//map不允许插入key相同的元素
	m.insert(pair<int, int>(4, 40));
	//查找
	auto pos = m.find(3);
	if (pos != m.end())
	{
		cout << "找到了" << endl;
		cout << "value = " << (*pos).second << endl;
	}
	else
	{
		cout << "没找到" << endl;
	}

	//统计
	int num = m.count(1);//找key=1的元素
	cout << "num = " << num << endl;
	return 0;
}