#pragma once
#include "Worker.h"
//普通员工类
class Employee:public Worker
{
public:
	Employee(int ID,string name,int DeptID);
	void ShowInfo();//查找职工和显示职工的时候要用
	string getDeptName();
};