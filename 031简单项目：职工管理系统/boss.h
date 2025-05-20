#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"
class Boss :public Worker
{
public:
	Boss(int ID, string name, int DeptID);
	virtual void ShowInfo();
	virtual string getDeptName();
};