#include <iostream>
using namespace std;
template <typename T>
void my_swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T>
void func()
{
	cout << "func�ĵ���" << endl;
}
int main()
{
	//1.�Զ������Ƶ��������Ƶ���һ�µ��������Ͳſ���ʹ��
	int a = 10;
	int b = 20;
	/*my_swap(a, b);*/
	//��ȷ
	/*cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

	char c = 'c';
	//my_swap(a, c);//�����Ƶ�����һ�µ�T����

	func<int>();//ģ�����ȷ����T���������ͣ��ſ���ʹ��
	return 0;
}