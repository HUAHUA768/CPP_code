#include <iostream>
using namespace std;
int main()
{
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;
	cout << ("short占用内存空间为") << sizeof(num1)<<endl;
	cout << ("int占用内存空间为") << sizeof(num2)<<endl;
	cout << ("long占用内存空间为") << sizeof(num3)<<endl;
	cout << ("long long占用内存空间为") << sizeof(num4)<<endl;

	system("pause");
	return 0;

}