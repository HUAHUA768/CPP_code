#include "WorkerManager.h"
#include "Employee.h"
#include "Worker.h"
#include "boss.h"
#include "Manager.h"
int main()
{
	WorkerManager p;
	int input = 0;

	while (true)
	{
		p.Menu();
		cout << "请输入您的选择：";
		cin >> input;
		switch (input)
		{
		case 0://退出系统
			p.ExitSystem();
			break;
		case 1://添加职工
		{
			p.AddEmp();
			p.save();
			break;
		}
		case 2://显示职工
			p.ShowEmp();
			break;
		case 3://删除职工
			p.Del_emp();
			break;
		case 4://修改职工
			p.Mod_Emp();
			break;
		case 5://查找职工
			p.Search_Emp();
			break;
		case 6://排序
			p.Sort_Emp();
			break;
		case 7://清空文件
			p.Clean_Emp();
			break;
		default:
			cout << "输入错误，请重新选择" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
	}
	p.Menu();
	return 0;


}