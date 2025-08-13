#include <iostream>
#include <set>
using namespace std;
//pair数组的创建
void test1()
{
	//第一种方式
	pair<string, int>p("Tom", 21);
	cout << "姓名：" << p.first << "\t年龄：" << p.second << endl;

	pair<string, int>p2 = make_pair("Jerry", 23);
	cout << "姓名：" << p2.first << "\t年龄：" << p2.second << endl;

}
int main()
{
	test1();
	return 0;
}