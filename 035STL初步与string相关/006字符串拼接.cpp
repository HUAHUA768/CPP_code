#include <iostream>
using namespace std;
//字符串拼接
//operator+=
void test1()
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << str1 << endl;
	str1 += ':';
	cout << str1 << endl;
	string str2 = "DNF";
	str1 += str2;
	cout << str1 << endl;
}

//append追加
void test2()
{
	string str1 = "I";
	str1.append(" love ");
	cout << str1 << endl;

	str1.append("game Minecraft", 4);
	cout << str1 << endl;

	/*string str2 = " DNF";
	str1.append(str2);
	cout << str1 << endl;*/

	string str3 = " LOL DNF";
	str1.append(str3, 4, 4);
	cout << str1 << endl;

}
int main()
{
	/*test1();*/

	test2();
	return 0;
}