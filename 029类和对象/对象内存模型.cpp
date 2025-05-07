#include <iostream>
using namespace std;
class Person
{
public:
	int m;
	static int k;
	void func(){}
	static void func2(){}
};
int Person::k = 100;
int main()
{
	Person p1;
	cout << sizeof(p1) << endl;//4

	return 0;
}