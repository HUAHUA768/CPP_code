#include <iostream>
using namespace std;
template <typename T>
//����һ���Զ�����������T
void mySwap(T& a, T& b)
//���庯��ģ��
{
	T tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	//�����ַ�ʽʹ�ú���ģ��
	int a = 10;
	int b = 20;
	//1.�Զ������Ƶ�
	/*mySwap(a, b);*/

	//2.��ʾָ������
	mySwap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}