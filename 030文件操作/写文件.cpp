#include <iostream>
using namespace std;
#include <fstream>

//写文件
int main()
{
	//1.包含头文件
	//2.创建对象
	ofstream ofs;
	//3.打开文件,文件路径以及打开方式
	ofs.open("test.txt", ios::out);

	//4.写文件
	ofs << "姓名：圆大西" << endl;
	ofs << "姓名：张三" << endl;

	//5.关闭文件
	ofs.close();
	return 0;
}