#include "globalFile.h"
#include "Identity.h"
#include <fstream>
#include <string> 
#include "student.h"
#include "manager.h"
#include "teacher.h"
//集合manager的各个功能
void ManagerMenu(Identity* manager)
{
	cout << "欢迎管理员" << manager->name << "使用系统" << endl;
	int select = 0;
	//将Identity*转换为Manager*
	Manager* man = (Manager*)manager;
	while (true)
	{
		manager->OperMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			//添加账号
			//cout << "添加账号" << endl;
			man->AddPerson();
			break;
		case 2:
			//查看账号
			//cout << "查看账号" << endl;
			man->ShowPerson();
			break;
		case 3:
			//查看机房
			//cout << "查看机房信息" << endl;
			man->Show_Computer();
			break;
		case 4:
			//清空预约记录
			//cout << "清空预约记录" << endl;
			man->Clean_File();
			break;
		case 0:
			//退出登录
			//cout << "退出登录" << endl;
			//new堆区别忘了delete
			delete manager;
			system("pause");
			system("cls");
			return;
		default:
			cout << "输入错误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
		
	}
}

//集合学生模块的各个功能
void StudentMenu(Identity* &student)
//Identity* student指针的拷贝  Identity* &student指针的引用
//                             int &s
{
	cout << "欢迎学生代表" << student->name << "使用系统" << endl;
	int select = 0;
	//将Identity*转换为Student*
	Student* s = (Student*)student;
	while (true)
	{
		student->OperMenu();
		cin >> select;
		switch (select)
		{
		case 1:
			s->Apply_Order();
			break;
		case 2:
			s->Show_MyOrder();
			break;
		case 3:
			s->Show_AllOrder();
			break;
		case 4:
			s->Cancel_Order();
			break;
		case 0:
			delete student;
			student = NULL;
			cout << "退出登录" << endl;
			system("pause");
			system("cls");
			//exit(0);  不可以 直接结束程序运行了
			return;
		}
	}

}

//老师主界面
void TeacherMenu(Identity* &teacher)
{
	int select;
	while (true)
	{
		teacher->OperMenu();
		Teacher* tea = (Teacher*)teacher;
		cin >> select;
		if (select == 1)
		{
			tea->Show_AllOrder();
		}
		else if (select == 2)
		{
			tea->Review_Order();
			
		}
		else if (select == 0)
		{
			cout << "退出登录" << endl;
			delete teacher;
			teacher = NULL;
			system("pause");
			system("cls");
			return;
		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
			system("pause");
			system("cls");
		}
		
	}
}

// 登录功能        操作文件名称  身份类型
void LoginIn(string file_name, int type)
{
	//基类指针指向派生类对象
	Identity* person = NULL;

	//读文件  判断信息是否一致
	ifstream ifs(file_name, ios::in|ios::binary);
	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		return;
	}

	//准备接受用户信息
	int id = 0;
	string name;
	string psw;

	//判断身份
	if (type == 1) //学生
	{
		cout << "请输入你的学号:>";
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入你的职工号:>";
		cin >> id;
	}
	//管理员没有id
	cout << "请输入您的用户名:>";
	cin >> name;
	cout << "请输入您的密码:>";
	cin >> psw;

	int fid;//从文件中读取的id
	string fname;
	string fPSW;
	if (type == 1)
	{
		//学生身份验证
		while (ifs >> fid && ifs >> fname && ifs >> fPSW)
		{
			/*cout << fid << " " << fname << " " << fPSW << endl;*/
			if (fid == id && fname == name && fPSW == psw)
			{
				cout << "学生验证登录成功" << endl;
				system("pause");
				system("cls");

				//创建身份
				person = new Student(id, name, psw);

				//进入学生子菜单
				StudentMenu(person);
				//delete person;
				return;
			}
		}
	}
	else if (type == 2)
	{
		//老师身份验证
		while (ifs >> fid && ifs >> fname && ifs >> fPSW)
		{
			//cout << fid << " " << fname << " " << fPSW << endl;
			if (fid == id && fname == name && fPSW == psw)
			{
				cout << "老师验证登录成功" << endl;
				system("pause");
				system("cls");

				//创建身份
				person = new Teacher(id, name, psw);

				//进入老师子菜单
				TeacherMenu(person);
				//delete person;

				return;
			}
		}
	}
	else if(type == 3)
	{
		//管理员身份验证
		while (ifs >> fname && ifs >> fPSW)
		{
			//cout << fname << " " << fPSW << endl;
			if (fname == name && fPSW == psw)
			{
				cout << "管理员验证登录成功" << endl;
				system("pause");
				system("cls");

				//创建身份
				person = new Manager(name, psw);

				//进入管理员子菜单
				ManagerMenu(person);
				//delete person;
				return;
			}
		}
	}

	cout << "验证登录失败！" << endl;
	system("pause");
	system("cls");
	return;
}
int main()
{
	int select;
	while (true)
	{
		cout << "====================欢迎使用机房预约系统===================="
			<< endl;
		cout << "请输入您的身份" << endl;
		cout << "\t\t --------------------\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     1.学生代表     |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     2.老    师     |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     3.管 理 员     |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     0.退    出     |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t --------------------\n";
		cout << "请输入您的选择:> ";
		cin >> select;

		switch (select)
		{
		case 1:
			//学生
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:
			//老师
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:
			//管理员
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:
			//退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			//exit(0);
			return 0;
		default:
			cout << "输入有误，请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	
	system("pause");
	return 0;
}