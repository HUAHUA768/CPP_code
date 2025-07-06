#include <iostream>
using namespace std;
#include <string>
//string的各种赋值操作
void test1()
{
	string str1;
	str1 = "hello world";
	cout << str1 << endl;

	string str2;
	str2 = str1;
	cout << str2 << endl;

	str2 = 'a';
	cout << str2 << endl;
}

//四种assign
void test2()
{
	string str1;
	str1.assign("王陶然别挂我科！");
	//由于assign返回的是string&，也可以写成下面的形式
	/*str1 = str1.assign("big west");*/
	cout << str1 << endl;

	//str1.assign("挂我科的都死妈了", 4);
	////把前4个字符赋给字符串
	//cout << str1 << endl;

	string str2;
	str2.assign(str1);
	cout << str2 << endl;

	string str3;
	str3.assign(10, 'c');
	cout << str3 << endl;
}
int main()
{
	/*test1();*/

	test2();
	return 0;
}