#include <iostream>
using namespace std;
#include <string>
void test1()
{
	string s1;//无参构造
	const char* str="hello world";
	string s2(str);//有参构造
	string s3("hello world");
	/*cout << s2 << endl;*/

	string s4(s2);//拷贝构造
	cout << s4 << endl;

	string s5(10, 'a');
	cout << s5 << endl;
}
int main()
{
	//string本质是个类
	test1();

	return 0;
}