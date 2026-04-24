#pragma once
#include "Identity.h"
class Teacher :public Identity
{
public:
	int Emp_id;//职工编号

	//默认构造
	Teacher();
	//有参构造
	Teacher(int id,string name,string PSW);
	//显示菜单
	virtual void OperMenu();//重写虚函数
	//查看所有预约
	void Show_AllOrder();
	//审核预约
	void Review_Order();
};