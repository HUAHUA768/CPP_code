#include <iostream>
using namespace std;
int* func()
{
	int* p = new int(10);
	//�ڶ����Ͽ����ڴ�ռ�
	return p;
}
int main()
{
	int* pc = func();
	cout << *pc << endl;

	return 0;
}