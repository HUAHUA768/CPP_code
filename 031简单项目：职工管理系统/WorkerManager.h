#pragma once  //��ֹͷ�ļ��ظ�����
#include <iostream>
#include <Windows.h>
#include "Worker.h"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();
	~WorkerManager();
	void Menu();
	void ExitSystem();
	int count;//��¼��ǰԱ���ĸ���
	Worker** arr;
	
	void AddEmp();//���Ա��
	void save();//���浽�ļ�
	int getEmpNum();//��ȡԱ������
	void Init_Emp();//��������
	void ShowEmp();//��ʾԱ����Ϣ
	int IsExist(int ID);//�ж�Ա���Ƿ���ڲ������±�
	void Del_emp();//ɾ��ְ��
	void Mod_Emp();//�޸�Ա��
	bool FlieIsEmp;//����ļ��Ƿ�Ϊ�գ���Ϊtrue
	void Search_Emp();//����ְ��

	//����������Ա��
	void Search_by_name(string n);

	void Sort_Emp();//���������

	void Clean_Emp();//����ļ�
};
