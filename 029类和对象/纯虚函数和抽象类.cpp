#include <iostream>
using namespace std;
class Base//������
{
public:
	//���麯��
	virtual void func() = 0;
};
//void test1()
//{
//	Base b;//�������޷�ʵ��������
//}

class Son :public Base
{
	void func()
	{
		cout << "func��������" << endl;
	}
};
int main()
{
	//Son s;//��������û����д���麯������ô���������ǳ�����

	Base* p = new Son;
	p->func();
	//��̬��ʹ�ã�����ָ��/����ָ���������
	delete p;
	return 0;
}