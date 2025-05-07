#include <iostream>
using namespace std;
class Person
{
public:
	/*void operator()(string test)
	{
		cout << test << endl;
	}*/
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{

	/*Person p;
	p("hello world");*/

	Person p;
	int ret = p(100, 200);
	cout << ret << endl;

	//匿名函数对象
	cout << Person()(100, 100) << endl;
	return 0;
}