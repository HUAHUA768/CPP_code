#include <iostream>
#include <string>
using namespace std;
int main()
{
	//1.整型
	int a = 1;
	cout << "请给整型变量a赋值" << endl;
	cin >> a;
	cout << "整数类型a=" << a << endl;

	//2.浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;

	//3.字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值" << endl;
	cin >> ch;
	cout << "字符型变量ch=" << ch << endl;
	cout << (int)ch << endl;


	//4.字符串型
	string str = "MAGA";
	cout << "请给字符串型变量str赋值" << endl;
	cin >> str;
	cout << "str=" << str << endl;

	//5.布尔类型
	bool flag = true;
	cout << "请给bool型变量flag赋值" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;
	system("pause");
	return  0;
}