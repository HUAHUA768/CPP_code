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
		cout << "����������ѡ��";
		cin >> input;
		switch (input)
		{
		case 0://�˳�ϵͳ
			p.ExitSystem();
			break;
		case 1://���ְ��
		{
			p.AddEmp();
			p.save();
			break;
		}
		case 2://��ʾְ��
			p.ShowEmp();
			break;
		case 3://ɾ��ְ��
			p.Del_emp();
			break;
		case 4://�޸�ְ��
			p.Mod_Emp();
			break;
		case 5://����ְ��
			p.Search_Emp();
			break;
		case 6://����
			p.Sort_Emp();
			break;
		case 7://����ļ�
			p.Clean_Emp();
			break;
		default:
			cout << "�������������ѡ��" << endl;
			Sleep(2000);
			system("cls");
			break;
		}
	}
	p.Menu();
	return 0;


}