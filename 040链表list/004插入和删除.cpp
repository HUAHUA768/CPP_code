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
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	PrintList(L1);

	//尾删
	L1.pop_back();
	PrintList(L1);

	//头删 
	L1.pop_front();
	PrintList(L1);

	//插入
	L1.insert(L1.begin() , 1000);
	PrintList(L1);

	//删除
	L1.erase(--L1.end());
	PrintList(L1);

	//移除（指定值）
	L1.remove(10);
	PrintList(L1);

	//清空
	L1.clear();
	PrintList(L1);
}
int main()
{
	test1();
	return 0;
}