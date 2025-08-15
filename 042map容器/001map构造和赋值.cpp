#include <iostream>
#include <map>
using namespace std;
void PrintMap(const map<int, int>& m)
{
	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "\tvalue = " << it->second << endl;
	}
	cout << endl;
}
int main()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	PrintMap(m);

	//¿½±´¹¹Ôì
	map<int, int>m1(m);
	PrintMap(m1);

	//¸³Öµ
	map<int, int>m2;
	m2 = m;
	PrintMap(m2);
	return 0;
}