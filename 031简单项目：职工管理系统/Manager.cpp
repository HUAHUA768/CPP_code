#include "Manager.h"
void Manager::ShowInfo()
{
	cout << "ְ����ţ�" << ID;
	cout << "\tְ��������" << name;
	cout << "\t��λ���ƣ�" << getDeptName();
	cout << "\t��λְ������ϰ彻�������񣬲���Ա����������" << endl;
}
string Manager::getDeptName()
{
	return string("����");
}
Manager::Manager(int ID,string name,int DeptID)
{
	this->ID = ID;
	this->name = name;
	this->DeptID = DeptID;
}