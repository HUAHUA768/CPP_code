#include <iostream>
#include <string>
using namespace std;
class Building;
class goodguy
{
public:
	Building* p;
	goodguy();
	void visit1();//���Է���˽������
	void visit2();//���ɷ���
};
class Building
{
	//��Ա��������Ԫ
	friend void goodguy::visit1();
public:
	string living_room;
	Building();
private:
	string bed_room;
};



Building::Building()
{
	living_room = "����";
	bed_room = "����";
}
goodguy::goodguy()
{
	p = new Building;
}
void goodguy::visit1()
{
	cout << "visit1�������ڷ��ʣ�" << p->living_room << endl;
	cout << "visit1�������ڷ��ʣ�" << p->bed_room << endl;
}
void goodguy::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << p->living_room << endl;

}
int main()
{
	goodguy a;
	a.visit1();

	/*a.visit2();*/
	return 0;
}