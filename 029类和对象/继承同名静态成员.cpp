#include <iostream>
using namespace std;
//�̳�ͬ����̬��Ա�Ĵ���ʽ
//����׶η����ڴ棬���ж�����ͬһ���ڴ�
class Base
{
public:
	static int a;
	//ͬ����̬��Ա����
	static void func()
	{
		cout << "Base-static void func" << endl;
	}

};
//����ǵó�ʼ��
int Base::a = 100;
class Son:public Base
{
public:
	static int a;
	static void func()
	{
		cout << "Son-static void func" << endl;
	}
};
int Son::a = 200;
void test1()
{
	//ͨ���������
	cout << "ͨ���������" << endl;
	Son s1;
	cout << "Son�е�a = " << s1.a << endl;
	cout << "Base�е�a = " << s1.Base::a << endl;
	cout << endl;
	
}
void test2()
{
	//ͨ����������
	cout << "ͨ����������:" << endl;
	cout << "Son�µ�a = " << Son::a << endl;
	cout << "Base�µ�a = " << Son::Base::a << endl;
}

//ͬ����̬��Ա����

void test3()
{
	/*Son s3;
	s3.func();
	s3.Base::func();*/

	//ͨ������
	Son::func();
	Son::Base::func();

}
int main()
{
	/*test1();*/
	/*test2();*/
	test3();
	return 0;
}