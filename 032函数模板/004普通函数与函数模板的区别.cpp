#include <iostream>
using namespace std;
int Add01(int a, int b)
{
	return a + b;
}
void test1()
{
	int a = 10;
	char b = 'C';//65 67
	int ret = Add01(a, b);
	//������ͨ��������'C'��char����ʽ����ת��Ϊ67��int��
	cout << ret << endl;
}

template<typename T>
int Add02(T a, T b)
{
	return a + b;
}
void test2()
{
	int a = 10;
	int b = 20;
	char c = 'c';//97+2=99
	int ret = Add02<int>(a, c);
	cout << ret << endl;
}
int main()
{
	/*test1();*/
	test2();
	return 0;
}