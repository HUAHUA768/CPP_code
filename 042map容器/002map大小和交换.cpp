#include <iostream>
#include <map>
using namespace std;
void PrintMap(const map<int, int>& m)
{
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "\t\tvalue = " << it->second << endl;
	}
	cout << endl;
}
int main()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));
	if (m1.empty())
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "m1大小为：" << m1.size() << endl;
	}

	//交换
	map<int, int>m2;
	m2.insert(pair<int, int>(5, 500));
	m2.insert(pair<int, int>(6, 600));
	m2.insert(pair<int, int>(7, 700));
	m1.swap(m2);
	PrintMap(m1);
	PrintMap(m2);
	return 0;
}