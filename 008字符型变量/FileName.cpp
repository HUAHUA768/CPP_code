#include <iostream>
using namespace std;
int main()
{
	//创建字符型变量
	char ch = 'a';//别忘了单引号
	cout << ch << endl;
	//字符型变量所占内存大小
	cout << sizeof(char) << endl;

	//字符型转整形(ASCII编码)
	cout << (int)ch << endl;
	//看看A的ASCII码
	char ch2 = 'A';
	cout << (int)ch2 << endl;
	system("pause");
	return 0;


}