#include <iostream>
using namespace std;
#include <string>
void test1()
{
	string str1 = "abcdf";
	/*int ret = str1.compare("cf");*/
	string str2 = "ydx";
	int ret = str1.compare(str2);
	cout << "ret = " << ret << endl;
}
int main()
{
	test1();
	return 0;
}