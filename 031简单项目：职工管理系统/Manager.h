#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"
class Manager:public Worker
{
public:
	Manager(int ID,string name,int DeptID);
	virtual void ShowInfo();
	virtual string getDeptName();
};