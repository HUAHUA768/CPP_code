#include <iostream>
#include <vector>
#include <list>
using namespace std;
void test1()
{
	//验证vector动态扩展会让原有迭代器失效
	//失效：vector扩展容量，需要重新动态开辟出一块新的空间，则需要新的迭代器
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = v.begin();
	cout << &(*it) << endl;
	//虽然迭代器类似于指针，却不能像打印指针一样直接打印出具体地址
	//*it访问到容器元素之后，再取地址才能获得此元素的具体地址
	v.resize(15);
	it = v.begin();
	cout << &(*it) << endl;
}

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}
//list构造函数
void test2()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int>L2(L1.begin(),L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L1);
	printList(L3);

	list<int>L4(10, 99);
	printList(L4);

}
int main()
{
	//test1();
	test2();
	return 0;
}
