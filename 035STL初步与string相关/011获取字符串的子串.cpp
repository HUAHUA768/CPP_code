#include <iostream>
using namespace std;
#include <string>
void test1()
{
	string str1 = "hello world";
	string str2 = str1.substr(0, 3);
	cout << str2 << endl;

}

//实用操作
void test2()
{
	//截取邮箱的前半段用户名
	string email = "zhangsan@qq.com";
	int pos = email.find('@');
	string name = email.substr(0, pos);
	cout << name << endl;
}
int main()
{
	/*test1();*/
	test2();
	return 0;
}