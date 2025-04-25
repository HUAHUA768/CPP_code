#include <iostream>
#include <string>
using namespace std;
int main()
{
	//c语言风格字符串
char ch[] = "new world";
	cout << ch << endl;
	//c++风格字符串,记得调用头文件
	string str = "new world";
	cout << str << endl;
	system("pause");
	return 0;
}