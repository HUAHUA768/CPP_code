#include <iostream>
using namespace std;
#include <fstream>

//д�ļ�
int main()
{
	//1.����ͷ�ļ�
	//2.��������
	ofstream ofs;
	//3.���ļ�,�ļ�·���Լ��򿪷�ʽ
	ofs.open("test.txt", ios::out);

	//4.д�ļ�
	ofs << "������Բ����" << endl;
	ofs << "����������" << endl;

	//5.�ر��ļ�
	ofs.close();
	return 0;
}