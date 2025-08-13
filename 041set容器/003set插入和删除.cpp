#include <iostream>
#include <set>
using namespace std;
void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	PrintSet(s1);

	s1.erase(s1.begin());
	PrintSet(s1);

	s1.erase(30);
	PrintSet(s1);

	//Çå¿Õ
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	PrintSet(s1);

}
int main()
{
	test1();
	return 0;
}