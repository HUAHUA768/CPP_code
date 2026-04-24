#include "student.h"
#include "globalFile.h"
#include <fstream>
#include "order_file.h"
//默认构造
Student::Student()
{

}
//有参构造
Student::Student(int id, string name, string PSW)
{
	this->id = id;
	this->name = name;
	this->PSW = PSW;

	//读入机房信息
	ifstream ifs(COMPUTER_FILE, ios::in);
	Computer_Room com;
	while (ifs >> com.Com_id && ifs >> com.Max_Capacity)
	{
		vCom.push_back(com);
	}
	ifs.close();
}
//菜单界面
void Student::OperMenu()//重写虚函数
{
	cout << "\t\t --------------------\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     1.申请预约     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|    2.查看自身预约  |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|    3.查看所有预约  |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     4.取消预约     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     0.退出登录     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t --------------------\n";
	cout << "请输入您的选择:> ";
}
//申请预约
void Student::Apply_Order()
{
	cout << "机房开放时间为周一至周五" << endl;
	cout << "请输入申请预约的时间：" << endl;
	cout << "1.周一" << endl;
	cout << "2.周二" << endl;
	cout << "3.周三" << endl;
	cout << "4.周四" << endl;
	cout << "5.周五" << endl;
	int date = 0;//日期
	int interval = 0;//时间段
	int room = 0;//机房编号
	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		else
		{
			cout << "输入错误，请重新输入:>" ;
		}
	}
	cout << "请输入申请预约的时间段：" << endl;
	cout << "1.上午" << endl;
	cout << "2.下午" << endl;
	while (true)
	{
		cin >> interval;
		if (interval == 1 || interval == 2)
		{
			break;
		}
		else
		{
			cout << "输入错误，请重新输入:>";
		}
	}
	cout << "请选择机房：" << endl;
	for (auto it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << it->Com_id << "号机房最大容量为：" << it->Max_Capacity << endl;
	}
	while (true)
	{
		cin >> room;
		if (room>=1&&room<=3)
		{
			break;
		}
		else
		{
			cout << "输入错误，请重新输入:>";
		}
	}
	cout << "预约成功，审核中" << endl;

	ofstream ofs;
	//ofs.open(ORDER_FILE, ios::out | ios::app);
	//ofstream已经默认包含ios::out,只需ios::app即可
	ofs.open(ORDER_FILE, ios::app);
	ofs << "date:" << date;
	ofs << "\tinterval:" << interval;
	ofs << "\tstuID:" << this->id;
	ofs << "\tstuName:" << this->name;
	ofs << "\troomID:" << room;
	ofs << "\tstatus:" << "1" << endl;
	ofs.close();

	system("pause");
	system("cls");
}
//查看自己的预约
void Student::Show_MyOrder()
{
	Order_File of;//读入预约记录文件
	if (of.m_size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (auto it = of.m_order.begin(); it != of.m_order.end(); it++)
	{
		//如何string转int？     atoi(stuID.c_str())
		if (it->second["stuID"] == to_string(this->id))//int转string
		{
			//找到了自身的预约
			cout << "预约日期:周" << it->second["date"];
			cout << "\t时间段:" << ((it->second["interval"] == "1") ? "上午" : "下午");
			cout << "\t机房号:" << it->second["roomID"];
			cout << "\t预约人姓名:" << it->second["stuName"];
			string status = "预约状态：";
			//1审核中 2成功预约 -1预约失败  0取消
			if (it->second["status"] == "1")
			{
				status += "审核中";
			}
			else if (it->second["status"] == "2")
			{
				status += "成功预约";
			}
			else if (it->second["status"] == "-1")
			{
				status += "审核未通过，预约失败";
			}
			else
			{
				status += "预约已取消";
			}
			cout << "\t"<<status << endl;
		}
	}
	system("pause");
	system("cls");
}
//查看所有预约
void Student::Show_AllOrder()
{
	Order_File of;//读入预约记录文件
	if (of.m_size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	int index = 1;//记录条数
	for (auto it = of.m_order.begin(); it != of.m_order.end(); it++)
	{
		cout << index << ".";
		cout << "预约日期:周" << it->second["date"];
		cout << "\t时间段:" << ((it->second["interval"] == "1") ? "上午" : "下午");
		cout << "\t学号:" << it->second["stuID"];
		cout << "\t姓名:" << it->second["stuName"];
		cout << "\t机房号:" << it->second["roomID"];
		string status = "预约状态：";
			//1审核中 2成功预约 -1预约失败  0取消
		if (it->second["status"] == "1")
		{
				status += "审核中";
		}
		else if (it->second["status"] == "2")
		{
			status += "成功预约";
		}
		else if (it->second["status"] == "-1")
		{
			status += "预约失败，审核未通过";
		}
		else
		{
			status += "预约已取消";
		}
		cout << "\t" << status << endl;
		index++;
	}
	system("pause");
	system("cls");
}
//取消预约
void Student::Cancel_Order()
{
	Order_File of;//读入预约记录文件
	if (of.m_size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "审核中或预约成功的记录可以取消，请输入要取消的记录" << endl;
	int index = 1;//展示给用户的序号默认为1
	vector<int>v;//存放m_order中符合条件的编号
	for (int i = 0; i < of.m_size; i++)
	{
		if (to_string(this->id) == of.m_order[i]["stuID"])
		{
			//再筛选状态，status应当等于1（审核中）或2（预约成功）
			if (of.m_order[i]["status"] == "1" || of.m_order[i]["status"] == "2")
			{
				v.push_back(i);
				cout << index << ".";
				cout << "预约日期：周" << of.m_order[i]["date"];
				cout << "\t时间段：" << (of.m_order[i]["interval"] == "1" ? "上午" : "下午");
				cout << "\t机房编号：" << of.m_order[i]["roomID"];
				string status = "状态：";
				if (of.m_order[i]["status"] == "1")
				{
					status += "审核中";
				}
				else
				{
					status += "预约成功";
				}
				cout << "\t" << status << endl;
				index++;
			}
		}
	}
	cout << "请输入要取消的记录，输入0返回" << endl;
	int select;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				system("cls");
				return;
			}
			else
			{
				of.m_order[v[select - 1]]["status"] = "0";
				of.update_Order();
				cout << "成功取消预约" << endl;
				system("pause");
				system("cls");
				return;
			}
		}
			cout << "输入有误，请重新输入:>" << endl;
		
	}

}
//虚析构
Student::~Student()
{

}
