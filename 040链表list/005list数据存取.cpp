#include <iostream>
#include <list>
using namespace std;
void test1()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	cout << "第一个元素：" << L1.front() << endl;
	cout << "最后一个元素：" << L1.back() << endl;
}
int main()
{
	test1();
	return 0;
}