#include "WorkerManager.h"
#include "Employee.h"
#include "Worker.h"
#include "boss.h"
#include "Manager.h"
#include <fstream>
#define FILENAME "EmpFile.txt"

//获取员工个数
int WorkerManager::getEmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int ID;
	string name;
	int depID;
	int num = 0;
	while (ifs >> ID && ifs >> name && ifs >> depID)
	{
		num++;
	}
	ifs.close();
	return num;
}
void WorkerManager::Init_Emp()
{
	this->count = this->getEmpNum();//文件中存储的职工个数
	this->arr = new Worker * [this->count];
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	for (int i = 0; i < this->count; i++)
	{
		int ID;
		string name;
		int depID;
		ifs >> ID >> name >> depID;
		switch (depID)
		{
		case 1:
			arr[i] = new Employee(ID, name, 1);
			break;
		case 2:
			arr[i] = new Manager(ID, name, 2);
			break;
		case 3:
			arr[i] = new Boss(ID, name, 3);
			break;
		default:
			break;
		}
	}
}
WorkerManager::WorkerManager()
{
	//升级构造函数：创建WM对象时，顺便打开并读入文件

	//打开文件有三种情况
	//第一种：文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())//如果文件不存在
	{
		/*cout << "文件不存在！" << endl;*/
		this->count = 0;
		this->arr = NULL;
		this->FlieIsEmp = true;
		ifs.close();
		return;
	}

	//若文件存在，判断文件是否为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		/*cout << "文件为空！" << endl;*/
		this->count = 0;
		this->arr = NULL;
		this->FlieIsEmp = true;
		ifs.close();
		return;
	}

	//第三种：文件不为空
	this->Init_Emp();
	
}
WorkerManager::~WorkerManager()
{
	//优化
	if (arr != NULL)
	{
		for (int i = 0; i < this->count; i++)
		{
			delete this->arr[i];
		}
		delete[]arr;
		arr = NULL;
	}
	
}
void WorkerManager::Menu()
{
	cout << "**********************************" << endl;
	cout << "******欢迎使用职工管理系统！******" << endl;
	cout << "**********0.退出管理系统**********" << endl;
	cout << "**********1.添加职工信息**********" << endl;
	cout << "**********2.显示职工信息**********" << endl;
	cout << "**********3.删除离职职工**********" << endl;
	cout << "**********4.修改职工信息**********" << endl;
	cout << "**********5.查找职工信息**********" << endl;
	cout << "**********6.按照编号排序**********" << endl;
	cout << "**********7.清空所有文档**********" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}  

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::AddEmp()//添加员工
{
	cout << "请输入您要添加的员工的个数" << endl;
	int Addnum;
	cin >> Addnum;
	if (Addnum > 0)
	{
		int newsize = Addnum + count;
		//开辟新的空间
		//我说白了，用realloc扩展空间就没这么多事情！
		Worker** newspace = new Worker* [newsize];
		int i = 0;
		//判断是否需要搬运原数组
		if (arr!=NULL)
		{
			for (i = 0; i < count; i++)
			{
				
				newspace[i] = arr[i];
			}
		}
		int k = 1;
		//输入新员工
		while (i < newsize)
		{
			cout << "请输入第" << k << "名新职工的信息"<<endl;
			int ID;
			cout << "请输入新职工的编号：";
			cin >> ID;
			string name;
			cout << "请输入新职工的姓名：";
			cin >> name;
			int choice;
			skip:
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cout << "请输入新员工的岗位：";
			
			cin >> choice;
			switch (choice)
			{
			case 1:
				newspace[i] = new Employee(ID, name, 1);
				break;
			case 2:
				newspace[i] = new Manager(ID, name, 2);
				break;
			case 3:
				newspace[i] = new Boss(ID, name, 3);
				break;
			default:
				cout << "输入错误，请重新输入" << endl;
				goto skip;
				break;
			}

			i++;
			k++;
			
		}
		delete[]arr;
		arr = newspace;

		//更新职工人数
		count = newsize;
		this->FlieIsEmp = false;
		cout << "成功添加了" << Addnum << "名职工" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "输入错误"<<endl;
		Sleep(2000);
		system("cls");
	}
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	/*ofs << "编号\t" << "姓名\t" << "部门编号" << endl;*/
	for (int i = 0; i < this->count; i++)
	{
		ofs << arr[i]->ID << "\t" << arr[i]->name<<"\t\t" << arr[i]->DeptID << endl;
	}

	ofs.close();
}

void WorkerManager::ShowEmp()//显示员工信息
{
	if (this->FlieIsEmp == true)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < this->count; i++)
		{
			arr[i]->ShowInfo();
		}
	}
	system("pause");
	system("cls");
	
}

int WorkerManager::IsExist(int ID)
{
	int Index = 0;
	for (int i = 0; i < this->count; i++)
	{
		if (ID == this->arr[i]->ID)
		{
			return Index;
		}
		Index++;
	}
	return -1;
}

void WorkerManager::Del_emp()//删除职工
{
	if (this->FlieIsEmp == true)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	int ID;
	cout << "请输入要删除的职工的编号："  ;
	cin >> ID;
	int ret = this->IsExist(ID);
	if (ret == -1)
	{
		cout << "要删除的员工不存在" << endl;
	}
	else
	{
		//ret是下标
		for (int i = ret; i < this->count-1; i++)
		{
			arr[i] = arr[i + 1];
		}
		this->count--;
		this->save();//同步到文件中
		cout << "删除成功！" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::Mod_Emp()//修改员工
{
	if (this->FlieIsEmp == true)
	{
		cout << "文件不存在或者记录为空！" << endl;
		return;
	}
	cout << "请输入要修改的员工编号：" << endl;
	int id;
	cin >> id;
	int ret = this->IsExist(id);
	
	if (ret == -1)
	{
		cout << "要修改的员工不存在！" << endl;
		Sleep(2000);
		system("cls");
		return;
		
	}
	else
	{
		delete this->arr[ret];//先删除
		cout << "查到：" << id << "号职工" << endl;
		cout << "请输入新的编号：";
		int ID;
		cin >> ID;
		
		cout << "请输入修改后的姓名：";
		string name;
		cin >> name;
		
		point:
		cout << "1.员工" << endl;
		cout << "2.经理" << endl;
		cout << "3.老板" << endl;
		cout << "请输入修改后的岗位：";
		int dId;
		cin >> dId;
		//由于部门更改了，所以类也得更改
		switch (dId)
		{
		case 1:
			arr[ret] = new Employee(ID, name, 1);
			break;
		case 2:
			arr[ret] = new Manager(ID, name, 2);
			break;
		case 3:
			arr[ret] = new Boss(ID, name, 3);
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			goto point;
			break;
		}
		
		this->save();
		cout << "修改成功！" << endl;
		
	}
	system("pause");
	system("cls");
}

//按姓名查找员工
void WorkerManager::Search_by_name(string n)
{
	bool is_exist = false;
	for (int i = 0; i < this->count; i++)
	{
		if (this->arr[i]->name == n)
		{
			cout << "查找成功，该员工编号为：" << this->arr[i]->ID << "号，详细信息如下：" << endl;
			arr[i]->ShowInfo();
			is_exist = true;
			
		}
	}
	if (is_exist == false)
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}


void WorkerManager::Search_Emp()//查找职工
{
	if (this->FlieIsEmp == true)
	{
		cout << "文件不存在或者记录为空！" << endl;
		system("pause");
		system("cls");
		return;
	}
	gs:
	cout << "请输入查找方式：" << endl;
	cout << "1.按编号查找" << endl;
	cout << "2.按姓名查找" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "请输入要查找的员工编号：" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret == -1)
		{
			cout << "查无此人！" << endl;
			Sleep(2000);
			system("cls");
			return;

		}
		else
		{
			//ret为数组下标
			cout << "查找成功，该员工信息如下：" <<endl;
			this->arr[ret]->ShowInfo();
			system("pause");
			system("cls");
		}
	}

	//要考虑重名的情况
	else if (choice == 2)
	{
		cout << "请输入要查找的员工姓名：";
		string n;
		cin >> n;
		//int ret = this->Search_by_name(n);
		//if (ret == -1)
		//{
		//	cout << "查无此人！" << endl;
		//	Sleep(2000);
		//	system("cls");
		//	return;
		//}
		//else
		//{
		//	//ret为数组下标
		//	cout << "查找成功，该员工信息如下：" << endl;
		//	this->arr[ret]->ShowInfo();
		//	system("pause");
		//	system("cls");
		//}

		//我们直接把重名查找封装成一个函数
		this->Search_by_name(n);

	}
	
	else
	{
		cout << "输入错误" << endl;
		/*Sleep(2000);
		system("cls");*/
		goto gs;
	}
}


void WorkerManager::Sort_Emp()//按编号排序
{
	//用选择排序算法实现函数
	//选择排序：每一轮(i)都找最大或者最小，然后跟i交换位置
	//一共count-1轮
	if (this->FlieIsEmp == true)
	{
		cout << "文件不存在或者记录为空！" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请选择排序方式：" << endl;
	cout << "1.按职工号进行顺序" << endl;//由小到大
	cout << "2.按职工号进行逆序" << endl;//由大到小
	int choice;
	cin >> choice;
	for (int i = 0; i < this->count - 1; i++)
	{
		int MinOrMax = i;
		for (int j = i + 1; j < this->count; j++)
		{
			if (choice == 1)//顺序
			{
				if (this->arr[j]->ID < this->arr[MinOrMax]->ID)
				{
					MinOrMax = j;//最小
				}
			}
			else//逆序
			{
				if (this->arr[j]->ID > this->arr[MinOrMax]->ID)
				{
					MinOrMax = j;//最大
				}
			}
		}
		if (MinOrMax != i)
		{
			Worker* tmp = this->arr[i];
			this->arr[i] = this->arr[MinOrMax];
			this->arr[MinOrMax] = tmp;
		}
	}
	cout << "排序成功！排序后的结果为：" << endl;
	this->save();
	this->ShowEmp();
	
}

void WorkerManager::Clean_Emp()//清空文件
{
	if (this->FlieIsEmp == true)
	{
		cout << "文件不存在或者记录为空！" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请确认是否清空文件：" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//删除文件并重新创建
		ofs.close();
		if (this->arr != NULL)
		{
			for (int i = 0; i < this->count; i++)
			{
				delete this->arr[i];
				this->arr[i] = NULL;
			}
			delete[]this->arr;
			this->arr = NULL;
			this->count = 0;
			this->FlieIsEmp = true;
		}

		cout << "清空成功！" << endl;
		system("pause");
		system("cls");
	}
	else if (choice == 2)
	{
		cout << "取消删除" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "输入错误，请重新输入" << endl;
		Sleep(2000);
		system("cls");
		return;
	}
}
