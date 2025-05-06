#include <iostream>
using namespace std;
void test(const int& a)
{
	a = 20;
}
int main()
{
	int a = 10;
	test(a);
	return 0;
}