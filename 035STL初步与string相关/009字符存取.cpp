#include <iostream>
using namespace std;
#include <string>
//×Ö·û´æÈ¡
void test1()
{
	//operator[]
	string str1 = "abcdef";
	cout << str1[2] << endl;
	str1[2] = 'd';
	cout << str1 << endl;

	//at·½·¨
	cout << str1.at(3) << endl;
	str1.at(0) = 'b';
	cout << str1 << endl;
}
int main()
{
	test1();

	return 0;
}