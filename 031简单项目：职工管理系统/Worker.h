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
	virtual void ShowInfo() = 0;//��ʾ������Ϣ+���麯��
	virtual string getDeptName() = 0;//��ȡ��������
	

};