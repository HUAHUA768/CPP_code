#include "boss.h"

void Boss::ShowInfo()
{
	cout << "ְ����ţ�" << ID;
	cout << "\tְ��������" << name;
	cout << "\t��λ���ƣ�" << getDeptName();
	cout << "\t��λְ�𣺹���˾����������" << endl;
}
string Boss::getDeptName()
{
	return string("�ϰ�");
}

Boss::Boss(int ID, string name, int DeptID)
{
	this->ID = ID;
	this->name = name;
	this->DeptID = DeptID;
}
