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
	//������д�ļ�
	//��������д�������ͣ�������д�Զ�������
	ofstream ofs;
	ofs.open("persn.txt", ios::binary | ios::out);
	
	//Ҳ���Զ���һ
	/*ofstream ofs("persn.txt", ios::binary | ios::out);*/

	Person p = { "����",24 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
	return 0;
}