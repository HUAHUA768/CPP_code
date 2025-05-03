#include <iostream>
using namespace std;
int main()
{
	//创建布尔类型
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	//查看bool所占内存空间
	cout << "bool类型所占内存空间为：" << sizeof(bool) << endl;
	system("pause");
	return 0;
}