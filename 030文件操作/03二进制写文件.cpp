#include <iostream>
using namespace std;
#include <fstream>
class Person
{
public:
	char name[64];
	int age;
	
};
int main()
{
	//二进制写文件
	//不仅可以写内置类型，还可以写自定义类型
	ofstream ofs;
	ofs.open("persn.txt", ios::binary | ios::out);
	
	//也可以二合一
	/*ofstream ofs("persn.txt", ios::binary | ios::out);*/

	Person p = { "张三",24 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
	return 0;
}