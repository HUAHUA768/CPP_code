#include <iostream>
using namespace std;
//�����õķ�ʽʵ�ֽ�������
void Swap(int &a,int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//���ô��ݣ��β�Ҳ��������ʵ��
	return 0;
}