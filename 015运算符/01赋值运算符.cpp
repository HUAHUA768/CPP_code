#include <iostream>
using namespace std;
//¸³ÖµÔËËã·û£º+  +=  -= *= /=  %=
int main()
{
	//=
	int a = 10;
	a = 666;
	cout << "a=" << a << endl;
	//+=
	a = 10;
	a += 6;
	cout << "a=" << a << endl;

	//-=
	a = 10;
	a -= 3;
	cout << "a=" << a << endl;

	//*=
	a = 10;
	a *= 3;
	cout << "a=" << a << endl;

	// /=
	a = 10;
	a /= 2;
	cout << "a=" << a << endl;

	//%=
	a = 20;
	a %= 3;
	cout << "a=" << a << endl;

	system("pause");
	return 0;
}