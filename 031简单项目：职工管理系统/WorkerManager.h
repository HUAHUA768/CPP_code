#pragma once  //防止头文件重复包含
#include <iostream>
#include <Windows.h>
#include "Worker.h"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	~WorkerManager();
	void Menu();
	void ExitSystem();
	int count;//记录当前员工的个数
	Worker** arr;
	
	void AddEmp();//添加员工
	void save();//保存到文件
	int getEmpNum();//获取员工个数
	void Init_Emp();//读入数据
	void ShowEmp();//显示员工信息
	int IsExist(int ID);//判断员工是否存在并返回下标
	void Del_emp();//删除职工
	void Mod_Emp();//修改员工
	bool FlieIsEmp;//标记文件是否为空，空为true
	void Search_Emp();//查找职工

	//按姓名查找员工
	void Search_by_name(string n);

	void Sort_Emp();//按编号排序

	void Clean_Emp();//清空文件
};
