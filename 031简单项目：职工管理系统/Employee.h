#pragma once
#include "Worker.h"
//��ͨԱ����
class Employee:public Worker
{
public:
	Employee(int ID,string name,int DeptID);
	void ShowInfo();//����ְ������ʾְ����ʱ��Ҫ��
	string getDeptName();
};