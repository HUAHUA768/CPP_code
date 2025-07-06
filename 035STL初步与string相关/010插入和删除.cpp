#include <iostream>
using namespace std;
#include <string>
void test1()
{
	string str1 = "abcdef";
	const char* arr = "abc";
	//arr = "big west";//arr可以修改指向，但是不能修改指向的内容
	//str1.insert(1, arr);
	//表示在str1[1]之前插入abc

	string str2 = "kkk";
	str1.insert(0, str2);
	cout << str1 << endl;

	str1.insert(0, 5, 99);
	cout << str1 << endl;

	//删除字符
	str1.erase(0, 4);
	cout << str1 << endl;
}
int main()
{
	test1();
	return 0;
}