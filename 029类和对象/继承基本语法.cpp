#include <iostream>
using namespace std;

//��ͨʵ�֣�ÿ�����д�������ԣ�
//class JAVA
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע�ᣨ����ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "JAVA��Python��C++...�����������б�" << endl;
//	}

//};
//
//class Python
//{

//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//������ֻ�����ݲ�һ��
//�����ü̳е�д�������ظ�����

//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע�ᣨ����ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ�������ײ���" << endl;
	}
	void left()
	{
		cout << "JAVA��Python��C++...�����������б�" << endl;
	}
};
class JAVA :public BasePage
{
public:
	void content()
	  {
		 cout << "JAVAѧ����Ƶ" << endl;
	  }
};
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}
};
int main()
{
	cout << "JAVAҳ��" << endl;
	JAVA p1;
	p1.header();
	p1.footer();
	p1.left();
	p1.content();
	cout << endl;
	cout << "Pythonҳ��" << endl;
	Python p2;
	p2.header();
	p2.footer();
	p2.left();
	p2.content();


	return 0;
}