#include <iostream>
using namespace std;
int main()
{
	//��Ŀ�����
	int a = 66;
	int b = 10;
	int c = 0;
	c = (a > b ? a : b); //Ҫ��Ҫ���Ŷ�����
		cout << "c=" << c << endl;
		//��Ŀ����Ľ���Ǳ��������Ը�ֵ
		(a > b ? a : b) = 100;
		cout << "a=" << a<< endl;
		cout << "b=" << b << endl;
	system("pause");
	return 0;
}