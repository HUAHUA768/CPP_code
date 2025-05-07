#include <iostream>
#include <string>
using namespace std;
class Building;
class goodguy
{
public:
	Building* p;
	goodguy();
	void visit1();//可以访问私有属性
	void visit2();//不可访问
};
class Building
{
	//成员函数做友元
	friend void goodguy::visit1();
public:
	string living_room;
	Building();
private:
	string bed_room;
};



Building::Building()
{
	living_room = "客厅";
	bed_room = "卧室";
}
goodguy::goodguy()
{
	p = new Building;
}
void goodguy::visit1()
{
	cout << "visit1函数正在访问：" << p->living_room << endl;
	cout << "visit1函数正在访问：" << p->bed_room << endl;
}
void goodguy::visit2()
{
	cout << "visit2函数正在访问：" << p->living_room << endl;

}
int main()
{
	goodguy a;
	a.visit1();

	/*a.visit2();*/
	return 0;
}