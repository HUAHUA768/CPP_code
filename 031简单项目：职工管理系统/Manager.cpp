#include "Manager.h"
void Manager::ShowInfo()
{
	cout << "职工编号：" << ID;
	cout << "\t职工姓名：" << name;
	cout << "\t岗位名称：" << getDeptName();
	cout << "\t岗位职责：完成老板交给的任务，并给员工分配任务" << endl;
}
string Manager::getDeptName()
{
	return string("经理");
}
Manager::Manager(int ID,string name,int DeptID)
{
	this->ID = ID;
	this->name = name;
	this->DeptID = DeptID;
}