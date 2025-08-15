#include <iostream>
#include <map>
using namespace std;
void PrintMap(const map<int, int>& m)
{
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "\t\tvalue = " << (*it).second << endl;
	}
	cout << endl;
}
int main()
{
	map<int, int>m1;
	//插入
	//第一种
	m1.insert(pair<int, int>(1, 10));
	//第二种
	m1.insert(make_pair(2, 22));
	//第三种
	m1.insert(map<int, int>::value_type(3, 33));
	//第四种
	m1[4] = 546;

	cout << m1[4] << endl;
	PrintMap(m1);

	//删除
	m1.erase(m1.begin());
	PrintMap(m1);

	m1.erase(4);//按照key删除
	PrintMap(m1);

	//清空
	//m1.erase(m1.begin(), m1.end());
	m1.clear();
	PrintMap(m1);
	return 0;
}