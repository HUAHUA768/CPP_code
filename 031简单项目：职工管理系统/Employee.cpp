#include "Employee.h"

void Employee::ShowInfo()
{
	cout << "职工编号：" << ID;
	cout << "\t职工姓名：" << name;
	cout << "\t岗位名称：" << getDeptName();
	cout << "\t岗位职责：完成经理交给的任务" << endl;
}
string Employee::getDeptName()
{
	return string("员工");
}

Employee::Employee(int ID, string name, int DeptID)
{
	this->ID = ID;
	this->name = name;
	this->DeptID = DeptID;
}
