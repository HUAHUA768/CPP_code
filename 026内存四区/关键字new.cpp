#include <iostream>
using namespace std;
int* func()
{
	int* p = new int(10);
	//在堆区上开辟内存空间
	return p;
}
int main()
{
	int* pc = func();
	cout << *pc << endl;

	return 0;
}