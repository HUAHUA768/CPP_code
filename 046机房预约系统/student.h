#pragma once
#include <vector>
#include "Identity.h" //继承父类，包含父类头文件
#include "computer_room.h"
#include <iostream>

class Student :public Identity
{
public:
	int id;//学生学号
	//默认构造
	Student();
	//有参构造
	Student(int id,string name,string PSW);
	//菜单界面
	virtual void OperMenu();//重写虚函数
	//申请预约
	void Apply_Order();
	//查看自己的预约
	void Show_MyOrder();
	//查看所有预约
	void Show_AllOrder();
	//取消预约
	void Cancel_Order();
	//虚析构
	~Student();
	//存放机房信息
	vector<Computer_Room>vCom;

};