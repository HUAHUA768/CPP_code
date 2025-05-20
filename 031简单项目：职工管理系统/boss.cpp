#include "boss.h"

void Boss::ShowInfo()
{
	cout << "职工编号：" << ID;
	cout << "\t职工姓名：" << name;
	cout << "\t岗位名称：" << getDeptName();
	cout << "\t岗位职责：管理公司的所有事务" << endl;
}
string Boss::getDeptName()
{
	return string("老板");
}

Boss::Boss(int ID, string name, int DeptID)
{
	this->ID = ID;
	this->name = name;
	this->DeptID = DeptID;
}
