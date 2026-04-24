#pragma once
#include "Identity.h"
#include <fstream>
#include "student.h"
#include "teacher.h"
#include <vector>
#include "computer_room.h"
class Manager:public Identity
{
public:
	vector<Student>vStu;
	vector<Teacher>vTea;
	vector<Computer_Room>vCom;
	Manager();
	Manager(string name,string PSW);
    //显示菜单
	virtual void OperMenu();//重写虚函数

	//添加账号
	void AddPerson();
	//查看账号
	void ShowPerson();
	//查看机房信息
	void Show_Computer();
	//清空预约信息
	void Clean_File();
	//初始化容器（读入文件）
	void Init_Vector();
	//检测重复id
	bool Check_Repeat(int type,int id);
};