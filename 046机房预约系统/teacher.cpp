#include "teacher.h"
#include "order_file.h"
#include <vector>
//默认构造
Teacher::Teacher()
{

}
//有参构造
Teacher::Teacher(int id, string name, string PSW)
{
	this->Emp_id = id;
	this->name = name;
	this->PSW = PSW;
}
//显示菜单
void Teacher::OperMenu()//重写虚函数
{
	cout << "欢迎教师" << this->name << "使用系统" << endl;
	cout << "\t\t --------------------\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|    1.查看所有预约  |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     2.审核预约     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     0.退出登录     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t --------------------\n";
	cout << "请输入您的选择:> ";
}
//查看所有预约
void Teacher::Show_AllOrder()
{
	Order_File of;//读入order文件数据
	if (of.m_size == 0)
	{
		cout << "预约记录为空" << endl;
		system("pause");
		system("cls");
		return;
	}
	int index = 1;
	for (int i = 0; i < of.m_size; i++)
	{
		cout << index << ".";
		cout << "日期:周" << of.m_order[i]["date"];
		cout << "\t时间段:" << (of.m_order[i]["interval"]=1?"上午":"下午");
		cout << "\t学号:" << of.m_order[i]["stuID"];
		cout << "\t姓名:" << of.m_order[i]["stuName"];
		cout << "\t机房编号:" << of.m_order[i]["roomID"];
		string status = "预约状态:";
		//1审核中 2预约成功 -1预约失败 0取消预约
		if (of.m_order[i]["status"] == "1")
		{
			status += "审核中";
		}
		else if (of.m_order[i]["status"] == "2")
		{
			status += "预约成功";
		}
		else if (of.m_order[i]["status"] == "-1")
		{
			status += "预约失败";
		}
		else
		{
			status += "取消预约";
		}
		cout << "\t" << status << endl;
		index++;
	}
	system("pause");
	system("cls");
}
//审核预约
void Teacher::Review_Order()
{
	Order_File of;//读入order文件数据
	if (of.m_size == 0)
	{
		cout << "预约记录为空" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "待审核的记录如下：" << endl;
	vector<int>v;//存放m_order中满足条件的下标
	int index = 1;//显示给用户的列表序号
	for (int i = 0; i < of.m_size; i++)
	{
		if (of.m_order[i]["status"] == "1")
		{
			cout << index << ".";
			cout << "日期:周" << of.m_order[i]["date"];
			cout << "\t时间段:" << (of.m_order[i]["interval"] = 1 ? "上午" : "下午");
			cout << "\t学生学号:" << of.m_order[i]["stuID"];
			cout << "\t学生姓名:" << of.m_order[i]["stuName"];
			cout << "\t机房编号:" << of.m_order[i]["roomID"];
			cout << "\t预约状态:审核中" << endl;
			index++;
			v.push_back(i);
		}
	}
	cout << "请选择要审核的记录，键入0返回" << endl;
	int select;
	int ret = 0;//接收审核结果
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				cout << "退出审核"<<endl;
				system("pause");
				system("cls");
				break;
			}
			else
			{
				cout << "请输入审核结果" << endl;
				cout << "1.不通过" << endl;
				cout << "2.通过" << endl;
				while (true)
				{
					cin >> ret;
					if (ret == 1)
					{
						of.m_order[v[index - 1]]["status"] = "-1";
						//cout << "审核不通过" << endl;
						break;
					}
					else if (ret == 2)
					{
						of.m_order[v[select - 1]]["status"] = "2";
						break;
					}
					else
					{
						cout << "输入有误，请重新输入:>";
					}
				}
				of.update_Order();
				cout << "审核完毕" << endl;
				break;
				
			}
		}
		else
		{
			cout << "输入有误，请重新输入:>";
		}
		
	}
	system("pause");
	system("cls");
}