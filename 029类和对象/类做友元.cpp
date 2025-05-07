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
	living_room = "客厅";
	bed_room = "卧室";
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
	cout << "好兄弟正在访问： " << p->living_room << endl;
	cout << "好兄弟正在访问： " << p->bed_room << endl;

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