#pragma once
#include <map>
#include <iostream>
using namespace std;
#include "globalFile.h"
#include <fstream>
#include <string>
class Order_File
{
	//读到所有文件中的信息
public:
	//构造函数
	Order_File();
	//更新预约记录
	void update_Order();

	//记录预约条数
	int m_size;
	//记录所有预约信息的容器
	map<int, map<string, string>> m_order;
	//m_size放在int这个位置
	//int为记录条数,内层map为date:1的键值对

};