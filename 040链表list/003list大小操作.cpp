#include <iostream>
#include <list>
using namespace std;
void PrintList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	PrintList(L1);

	if (L1.empty() == true)
	{
		cout << "容器为空" << endl;
	}
	else
	{
		cout << "容器不为空" << endl;
		cout << "L1的元素个数为：" << L1.size() << endl;
	}

	L1.resize(10,99);
	PrintList(L1);

	
}
int main()
{
	test1();
	return 0;
}