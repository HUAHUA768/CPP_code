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
	ifstream ifs;
	ifs.open("persn.txt", ios::binary | ios::in);
	//判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 1;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.name << endl;
	cout << "年龄：" << p.age << endl;

	ifs.close();
	return 0;
}