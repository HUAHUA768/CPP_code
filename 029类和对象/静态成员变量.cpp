#include <iostream>
using namespace std;
class Person
{
public:
	static int m;
	//��������
private:
	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static int n;
};
//�����ʼ��
int Person::m = 100;
int Person::n = 200;
int main()
{
	/*Person p1;
	cout << p1.m << endl;
	Person p2;
	p2.m = 200;
	cout << p1.m << endl;*/
	//���ж�����ͬһ������

	//������ͨ�����������ʾ�̬��Ա����
	cout << Person::m << endl;
	//cout << Person::n << endl;
	//������ʲ���˽�о�̬��Ա����
	return 0;
}