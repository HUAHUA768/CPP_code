#pragma once
#include <iostream>
using namespace std;
#include <string>
class Worker
{
public:
	int ID = 0;
	string name;
	int DeptID = 0;
	virtual void ShowInfo() = 0;//显示个人信息+纯虚函数
	virtual string getDeptName() = 0;//获取部门名字
	

};