#include "Employee.h"

void Employee::ShowInfo()
{
	cout << "ְ����ţ�" << ID;
	cout << "\tְ��������" << name;
	cout << "\t��λ���ƣ�" << getDeptName();
	cout << "\t��λְ����ɾ�����������" << endl;
}
string Employee::getDeptName()
{
	return string("Ա��");
}

Employee::Employee(int ID, string name, int DeptID)
{
	this->ID = ID;
	this->name = name;
	this->DeptID = DeptID;
}
