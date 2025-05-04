#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	cout << (a || b) << endl;
	a = 0;
	cout << (a || b) << endl;
	b = 0;
	cout << (a || b) << endl;

	system("pause");
	return 0;
}