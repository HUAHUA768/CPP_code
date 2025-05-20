#include "WorkerManager.h"
#include "Employee.h"
#include "Worker.h"
#include "boss.h"
#include "Manager.h"
#include <fstream>
#define FILENAME "EmpFile.txt"

//��ȡԱ������
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
	this->count = this->getEmpNum();//�ļ��д洢��ְ������
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
	//�������캯��������WM����ʱ��˳��򿪲������ļ�

	//���ļ����������
	//��һ�֣��ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())//����ļ�������
	{
		/*cout << "�ļ������ڣ�" << endl;*/
		this->count = 0;
		this->arr = NULL;
		this->FlieIsEmp = true;
		ifs.close();
		return;
	}

	//���ļ����ڣ��ж��ļ��Ƿ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		/*cout << "�ļ�Ϊ�գ�" << endl;*/
		this->count = 0;
		this->arr = NULL;
		this->FlieIsEmp = true;
		ifs.close();
		return;
	}

	//�����֣��ļ���Ϊ��
	this->Init_Emp();
	
}
WorkerManager::~WorkerManager()
{
	//�Ż�
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
	cout << "******��ӭʹ��ְ������ϵͳ��******" << endl;
	cout << "**********0.�˳�����ϵͳ**********" << endl;
	cout << "**********1.���ְ����Ϣ**********" << endl;
	cout << "**********2.��ʾְ����Ϣ**********" << endl;
	cout << "**********3.ɾ����ְְ��**********" << endl;
	cout << "**********4.�޸�ְ����Ϣ**********" << endl;
	cout << "**********5.����ְ����Ϣ**********" << endl;
	cout << "**********6.���ձ������**********" << endl;
	cout << "**********7.��������ĵ�**********" << endl;
	cout << "**********************************" << endl;
	cout << endl;
}  

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void WorkerManager::AddEmp()//���Ա��
{
	cout << "��������Ҫ��ӵ�Ա���ĸ���" << endl;
	int Addnum;
	cin >> Addnum;
	if (Addnum > 0)
	{
		int newsize = Addnum + count;
		//�����µĿռ�
		//��˵���ˣ���realloc��չ�ռ��û��ô�����飡
		Worker** newspace = new Worker* [newsize];
		int i = 0;
		//�ж��Ƿ���Ҫ����ԭ����
		if (arr!=NULL)
		{
			for (i = 0; i < count; i++)
			{
				
				newspace[i] = arr[i];
			}
		}
		int k = 1;
		//������Ա��
		while (i < newsize)
		{
			cout << "�������" << k << "����ְ������Ϣ"<<endl;
			int ID;
			cout << "��������ְ���ı�ţ�";
			cin >> ID;
			string name;
			cout << "��������ְ����������";
			cin >> name;
			int choice;
			skip:
			cout << "1.Ա��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cout << "��������Ա���ĸ�λ��";
			
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
				cout << "�����������������" << endl;
				goto skip;
				break;
			}

			i++;
			k++;
			
		}
		delete[]arr;
		arr = newspace;

		//����ְ������
		count = newsize;
		this->FlieIsEmp = false;
		cout << "�ɹ������" << Addnum << "��ְ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "�������"<<endl;
		Sleep(2000);
		system("cls");
	}
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	/*ofs << "���\t" << "����\t" << "���ű��" << endl;*/
	for (int i = 0; i < this->count; i++)
	{
		ofs << arr[i]->ID << "\t" << arr[i]->name<<"\t\t" << arr[i]->DeptID << endl;
	}

	ofs.close();
}

void WorkerManager::ShowEmp()//��ʾԱ����Ϣ
{
	if (this->FlieIsEmp == true)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
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

void WorkerManager::Del_emp()//ɾ��ְ��
{
	if (this->FlieIsEmp == true)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	int ID;
	cout << "������Ҫɾ����ְ���ı�ţ�"  ;
	cin >> ID;
	int ret = this->IsExist(ID);
	if (ret == -1)
	{
		cout << "Ҫɾ����Ա��������" << endl;
	}
	else
	{
		//ret���±�
		for (int i = ret; i < this->count-1; i++)
		{
			arr[i] = arr[i + 1];
		}
		this->count--;
		this->save();//ͬ�����ļ���
		cout << "ɾ���ɹ���" << endl;
		system("pause");
		system("cls");
	}
}

void WorkerManager::Mod_Emp()//�޸�Ա��
{
	if (this->FlieIsEmp == true)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
		return;
	}
	cout << "������Ҫ�޸ĵ�Ա����ţ�" << endl;
	int id;
	cin >> id;
	int ret = this->IsExist(id);
	
	if (ret == -1)
	{
		cout << "Ҫ�޸ĵ�Ա�������ڣ�" << endl;
		Sleep(2000);
		system("cls");
		return;
		
	}
	else
	{
		delete this->arr[ret];//��ɾ��
		cout << "�鵽��" << id << "��ְ��" << endl;
		cout << "�������µı�ţ�";
		int ID;
		cin >> ID;
		
		cout << "�������޸ĺ��������";
		string name;
		cin >> name;
		
		point:
		cout << "1.Ա��" << endl;
		cout << "2.����" << endl;
		cout << "3.�ϰ�" << endl;
		cout << "�������޸ĺ�ĸ�λ��";
		int dId;
		cin >> dId;
		//���ڲ��Ÿ����ˣ�������Ҳ�ø���
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
			cout << "�����������������" << endl;
			goto point;
			break;
		}
		
		this->save();
		cout << "�޸ĳɹ���" << endl;
		
	}
	system("pause");
	system("cls");
}

//����������Ա��
void WorkerManager::Search_by_name(string n)
{
	bool is_exist = false;
	for (int i = 0; i < this->count; i++)
	{
		if (this->arr[i]->name == n)
		{
			cout << "���ҳɹ�����Ա�����Ϊ��" << this->arr[i]->ID << "�ţ���ϸ��Ϣ���£�" << endl;
			arr[i]->ShowInfo();
			is_exist = true;
			
		}
	}
	if (is_exist == false)
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}


void WorkerManager::Search_Emp()//����ְ��
{
	if (this->FlieIsEmp == true)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	gs:
	cout << "��������ҷ�ʽ��" << endl;
	cout << "1.����Ų���" << endl;
	cout << "2.����������" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "������Ҫ���ҵ�Ա����ţ�" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret == -1)
		{
			cout << "���޴��ˣ�" << endl;
			Sleep(2000);
			system("cls");
			return;

		}
		else
		{
			//retΪ�����±�
			cout << "���ҳɹ�����Ա����Ϣ���£�" <<endl;
			this->arr[ret]->ShowInfo();
			system("pause");
			system("cls");
		}
	}

	//Ҫ�������������
	else if (choice == 2)
	{
		cout << "������Ҫ���ҵ�Ա��������";
		string n;
		cin >> n;
		//int ret = this->Search_by_name(n);
		//if (ret == -1)
		//{
		//	cout << "���޴��ˣ�" << endl;
		//	Sleep(2000);
		//	system("cls");
		//	return;
		//}
		//else
		//{
		//	//retΪ�����±�
		//	cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
		//	this->arr[ret]->ShowInfo();
		//	system("pause");
		//	system("cls");
		//}

		//����ֱ�Ӱ��������ҷ�װ��һ������
		this->Search_by_name(n);

	}
	
	else
	{
		cout << "�������" << endl;
		/*Sleep(2000);
		system("cls");*/
		goto gs;
	}
}


void WorkerManager::Sort_Emp()//���������
{
	//��ѡ�������㷨ʵ�ֺ���
	//ѡ������ÿһ��(i)������������С��Ȼ���i����λ��
	//һ��count-1��
	if (this->FlieIsEmp == true)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "��ѡ������ʽ��" << endl;
	cout << "1.��ְ���Ž���˳��" << endl;//��С����
	cout << "2.��ְ���Ž�������" << endl;//�ɴ�С
	int choice;
	cin >> choice;
	for (int i = 0; i < this->count - 1; i++)
	{
		int MinOrMax = i;
		for (int j = i + 1; j < this->count; j++)
		{
			if (choice == 1)//˳��
			{
				if (this->arr[j]->ID < this->arr[MinOrMax]->ID)
				{
					MinOrMax = j;//��С
				}
			}
			else//����
			{
				if (this->arr[j]->ID > this->arr[MinOrMax]->ID)
				{
					MinOrMax = j;//���
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
	cout << "����ɹ��������Ľ��Ϊ��" << endl;
	this->save();
	this->ShowEmp();
	
}

void WorkerManager::Clean_Emp()//����ļ�
{
	if (this->FlieIsEmp == true)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "��ȷ���Ƿ�����ļ���" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.ȡ��" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
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

		cout << "��ճɹ���" << endl;
		system("pause");
		system("cls");
	}
	else if (choice == 2)
	{
		cout << "ȡ��ɾ��" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		cout << "�����������������" << endl;
		Sleep(2000);
		system("cls");
		return;
	}
}
