#include <iostream>
#include <string>
using namespace std;
int main()
{
	//1.����
	int a = 1;
	cout << "������ͱ���a��ֵ" << endl;
	cin >> a;
	cout << "��������a=" << a << endl;

	//2.������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ" << endl;
	cin >> f;
	cout << "�����ͱ���f=" << f << endl;

	//3.�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���ch=" << ch << endl;
	cout << (int)ch << endl;


	//4.�ַ�����
	string str = "MAGA";
	cout << "����ַ����ͱ���str��ֵ" << endl;
	cin >> str;
	cout << "str=" << str << endl;

	//5.��������
	bool flag = true;
	cout << "���bool�ͱ���flag��ֵ" << endl;
	cin >> flag;
	cout << "flag=" << flag << endl;
	system("pause");
	return  0;
}