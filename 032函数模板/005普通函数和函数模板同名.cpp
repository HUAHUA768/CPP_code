#include <iostream>
using namespace std;
void myPrint(int a, int b)
{
	cout << "��������ͨ����" << endl;
}
template<class T>
void myPrint(T a, T b)
{
	cout << "�����˺���ģ��" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "���������صĺ���ģ��" << endl;
}

int main()
{
	int a = 10;
	int b = 20;
	/*myPrint(a, b);*/

	//ͨ�� ��ģ������б� ǿ�Ƶ��ú���ģ��
	/*myPrint<>(a, b);*/

	int c = 30;
	/*myPrint(a, b, c);*/

	char c1 = 'c';
	char c2 = 'a';
	myPrint(c1, c2);
	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
	return 0;
}