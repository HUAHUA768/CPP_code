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
	//�ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 1;
	}

	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.name << endl;
	cout << "���䣺" << p.age << endl;

	ifs.close();
	return 0;
}