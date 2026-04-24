#include "manager.h"
#include "globalFile.h"
#include <algorithm>
#include <iomanip>
Manager::Manager()
{

}
Manager::Manager(string name, string PSW)
{
	this->name = name;
	this->PSW = PSW;
	this->Init_Vector();

	//读入机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		return;
	}
	Computer_Room c;
	while (ifs >> c.Com_id && ifs >> c.Max_Capacity)
	{
		vCom.push_back(c);
	}
	ifs.close();
	//cout << "机房数量为：" << vCom.size() << endl;
}
//显示菜单
void Manager::OperMenu()//重写虚函数
{
	
	cout << "\t\t --------------------\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     1.添加账号     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     2.查看账号     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     3.查看机房     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     4.清空预约     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     0.退出登录     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t --------------------\n";
	cout << "请输入您的选择:> ";
}
//添加账号
void Manager::AddPerson()
{
	string filename;//要打开的文件
	string tip;//提示输入学号/职工号
	string error_tip;
	

	
	int select = 0;
	ofstream ofs;
	while (true)
	{
		cout << "请输入添加账号的类型" << endl;
		cout << "1.添加学生" << endl;
		cout << "2.添加老师" << endl;
		cin >> select;
		if (select == 1)
		{
			tip = "请输入您的学号:>";
			filename = STUDENT_FILE;
			error_tip = "您输入的学号已被占用，请重新输入:>";
			break;
		}
		else if (select == 2)
		{
			tip = "请输入您的职工号:>";
			filename = TEACHER_FILE;
			error_tip= "您输入的职工号已被占用，请重新输入:>";
			break;
		}
		else
		{
			cout << "输入错误，请重新输入" <<endl;
			system("pause");
			system("cls");
		}
	}

	ofs.open(filename, ios::out | ios::app);
	string name;
	int id;
	string psw;
	cout << tip;
	while (true)
	{
		cin >> id;
		if (this->Check_Repeat(select, id))
		{
			cout << error_tip;
		}
		else
		{
			break;
		}
	}
	
	cout << "请输入您的姓名:>";
	cin >> name;
	cout << "请输入您的密码:>";
	cin >> psw;

	//写入文件
	ofs << id << "\t" << name << "\t" << psw << endl;
	cout << "添加成功" << endl;
	ofs.close();
	//读入文件信息以便判断id是否重复
	this->Init_Vector();
	system("pause");
	system("cls");
}
void Print_Stu(const Student &s)
{
	cout <<  "学号:" << setw(3)<< s.id << "\t姓名:" << s.name << "\t密码:" << s.PSW << endl;
}
void Print_Tea(const Teacher& t)
{
	cout << "职工号:" << setw(3) << t.Emp_id << "\t姓名:" << t.name << "\t密码:" << t.PSW << endl;
}
//查看账号
void Manager::ShowPerson()
{
	cout << "请选择查看内容:" << endl;
	cout << "1.查看所有学生" << endl;
	cout << "2.查看所有老师" << endl;
	int select;
	while (true)
	{
		cout << "请输入您的选择:>";
		cin >> select;
		if (select == 1)
		{
			cout << "所有学生信息如下" << endl;
			for_each(this->vStu.begin(), vStu.end(), Print_Stu);
			break;
		}
		else if(select==2)
		{
			cout << "所有教师信息如下" << endl;
			for_each(vTea.begin(), vTea.end(), Print_Tea);
			break;
		}
		else
		{
			cout << "选择错误，请重新输入" << endl;
		}

	}
	system("pause");
	system("cls");
}
//查看机房信息
void Manager::Show_Computer()
{
	cout << "机房信息如下:" << endl;
	for (auto it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "机房编号：" << it->Com_id << "\t机房容量：" << it->Max_Capacity << endl;
	}
	system("pause");
	system("cls");
}
//清空预约信息
void Manager::Clean_File()
{
	cout << "确认清空预约记录？" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;
	int select = 0;
	cout << "请输入:>";
	while (true)
	{
		cin >> select;
		if (select == 1)
		{
			ofstream ofs(ORDER_FILE, ios::trunc);
			cout << "成功清空预约记录" << endl;
			ofs.close();
			system("pause");
			system("cls");
			break;
		}
		else if(select == 2)
		{
			cout << "取消清空" << endl;
			system("pause");
			system("cls");
			return;
		}
		else
		{
			cout << "输入错误，请重新输入:>";
		}
	}
	
	
}

//初始化容器（读入文件）
void Manager::Init_Vector()
{
	this->vStu.clear();
	this->vTea.clear();

	ifstream ifs(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		return;
	}
	Student s;
	while (ifs >> s.id && ifs>>s.name && ifs>>s.PSW)
	{
		vStu.push_back(s);
	}
	//cout << "当前学生数量为:" << vStu.size() << endl;
	ifs.close();
	//读取老师信息
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		return;
	}
	Teacher t;
	while (ifs >> t.Emp_id && ifs >> t.name && ifs >> t.PSW)
	{
		vTea.push_back(t);
	}
	//cout << "当前老师数量为:" << vTea.size() << endl;
	ifs.close();
}

//检测重复id
bool Manager::Check_Repeat(int type,int id)
{
	if (type == 1)
	{
		for (auto it = this->vStu.begin(); it != vStu.end(); it++)
		{
			if (it->id == id)
			{
				return true;
			}
		}
	}
	else
	{
		for (auto it = vTea.begin(); it != vTea.end(); it++)
		{
			if (it->Emp_id == id)
			{
				return true;
			}
		}
	}

	return false;
}