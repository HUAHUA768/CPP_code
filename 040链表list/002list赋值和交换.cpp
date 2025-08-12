#include<iostream>
#include<list>
using namespace std;
//list赋值和交换
void printList(const list<int>& L)
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

	list<int>L2;
	L2.assign(L1.begin(), L1.end());
	printList(L2);

	list<int>L3;
	L3 = L1;
	printList(L3);

	list<int>L4;
	L4.assign(10, 66);
	printList(L4);
}

//交换
void test2()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 99);

	L1.swap(L2);
	printList(L1);
	printList(L2);
}
int main()
{
	//test1();
	test2();
	return 0;
}