#include <iostream>
using namespace std;
#include <string>
class Building
{
	friend class goodguy;
public:
	Building();
public:
	string living_room;
private:
	string bed_room;
};
Building::Building()
{
	living_room = "����";
	bed_room = "����";
}
class goodguy
{
public:
	goodguy();
	Building* p;
	void visit();
	~goodguy()
	{
		delete p;
		p = NULL;
	}
};
void goodguy::visit()
{
	cout << "���ֵ����ڷ��ʣ� " << p->living_room << endl;
	cout << "���ֵ����ڷ��ʣ� " << p->bed_room << endl;

}

goodguy::goodguy()
{
	p = new Building;
}
int main()
{
	goodguy a;
	a.visit();

	return 0;
}